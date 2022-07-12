# Import common libraries
import asyncio
import os
import socket
from enum import Enum
from time import perf_counter, sleep

# Import Dask libraries
import dask.dataframe as dd
from dask.dataframe import DataFrame
from dask.distributed import Client, progress, wait
from dask_jobqueue import LSFCluster

# Import other libraries
from tqdm.auto import tqdm

WORKER_CHECK_INTERVAL = 5.0


class ClusterType(Enum):
    LSF = 'LSF'


class ClusterOptions(object):

    def __init__(self, cluster_type: ClusterType, **cluster_settings):
        self.cluster_type = cluster_type
        self.cluster_settings = cluster_settings


class Analyzer(object):

    def __init__(self, n_workers: int, cluster_options: ClusterOptions, debug=False):
        # Keep values
        self.cluster_options = cluster_options
        self.debug = debug
        self.n_workers = n_workers

        # Declare vars
        n_steps = 3

        # Start progress
        pbar = tqdm(total=n_steps)

        # Initialize cluster
        pbar.set_description(f"Initializing {cluster_options.cluster_type.name} cluster")
        self.cluster = self.__initialize_cluster(cluster_options=cluster_options)
        pbar.update()

        # Initialize client
        pbar.set_description("Initializing Dask client")
        self.client = Client(self.cluster)
        pbar.update()

        # Scale cluster
        pbar.set_description(f"Scaling up the cluster to {n_workers} nodes")
        self.cluster.scale(n_workers)
        self.__wait_until_workers_alive()
        pbar.update()

        # Close progress
        pbar.set_description("Analyzer initialized")
        pbar.close()

    def _filter_non_io_traces(self, df: DataFrame):
        # Filter non-I/O traces (except for MPI)
        df = df[(df['level'] == 0) | df['cat'].isin([0, 1, 3])]
        # Return dataframe
        return df

    def _split_io_mpi_trace(self, df: DataFrame):
        # Split dataframe into I/O, MPI and trace
        io_df = df[df['cat'].isin([0, 1, 3])]
        mpi_df = df[df['cat'] == 2]
        trace_df = df[df['cat'] == 4]
        # Set additional columns
        self.__set_durations(io_df)
        self.__set_filenames(io_df)
        # Return splitted dataframes
        return io_df, mpi_df, trace_df

    def analyze_parquet_logs(self, log_dir: str, engine="pyarrow-dataset"):
        # Keep workers alive
        keep_alive_task = asyncio.create_task(self.__keep_workers_alive())

        # Declare vars
        n_steps = 7

        # Start progress
        pbar = tqdm(total=n_steps)

        # Read logs into a dataframe
        pbar.set_description("Reading logs into dataframe")
        df, _ = self.__read_parquet(log_dir=log_dir, engine=engine)
        pbar.update()

        # Compute job time
        pbar.set_description("Computing job time")
        job_time, _ = self._compute_job_time(df=df)
        pbar.update()

        # Filter non-I/O traces (except for MPI)
        df = self._filter_non_io_traces(df)

        # Split dataframe into I/O, MPI and trace
        io_df, mpi_df, trace_df = self._split_io_mpi_trace(df)

        # Split io_df into read & write and metadata dataframes
        io_df_read_write, io_df_metadata = self.__split_read_write_metadata(io_df)

        # Build hypotheses
        # print(io_df_read_write.info())

        # Close progress
        pbar.set_description("Analysis completed")
        pbar.close()

        # Cancel task
        keep_alive_task.cancel()

        return io_df_read_write, job_time

    def _compute_job_time(self, df: DataFrame):
        # Compute job time
        t_start = perf_counter()
        job_time = df['tend'].max().compute()
        t_end = perf_counter()
        t_elapsed = t_end - t_start
        # Print performance
        if self.debug:
            print(f"Job time computation took {t_elapsed} seconds")
        # Return job time
        return job_time, t_elapsed

    def _current_n_workers(self):
        # Get current number of workers
        return len(self.client.scheduler_info()["workers"])

    def _persist(self, df: DataFrame):
        # Persist data frame
        t_start = perf_counter()
        df = df.persist()
        wait(df)
        t_end = perf_counter()
        t_elapsed = t_end - t_start
        # Print performance
        if self.debug:
            print(f"Persisting dataframe took {t_elapsed} seconds")
        # Return job time
        return df, t_elapsed

    def __initialize_cluster(self, cluster_options: ClusterOptions):
        # Prepare cluster configuration
        cores = cluster_options.cluster_settings.get("cores", 4)
        processes = cluster_options.cluster_settings.get("processes", 4)
        memory = cluster_options.cluster_settings.get("memory", '{}GB'.format(128))
        use_stdin = cluster_options.cluster_settings.get("use_stdin", True)
        worker_time = cluster_options.cluster_settings.get("worker_time", "02:00")
        worker_queue = cluster_options.cluster_settings.get("worker_queue", "pdebug")
        log_file = cluster_options.cluster_settings.get("log_file", "vani.log")
        host = cluster_options.cluster_settings.get("host", socket.gethostname())
        dashboard_address = cluster_options.cluster_settings.get("dashboard_address", '{}:8264'.format(host))
        # Create empty cluster
        cluster = None
        # Check specificed cluster type
        if (cluster_options.cluster_type == ClusterType.LSF):
            # Initialize cluster
            cluster = LSFCluster(cores=cores,
                                 processes=processes,
                                 memory=memory,
                                 dashboard_address=dashboard_address,
                                 death_timeout=300,
                                 header_skip=['-n', '-R', '-M', '-P', '-W 00:30'],
                                 host=host,
                                 job_extra=['-nnodes 1',
                                            '-G asccasc',
                                            '-q {}'.format(worker_queue),
                                            '-W {}'.format(worker_time),
                                            '-o {}'.format(log_file),
                                            '-e {}'.format(log_file)],
                                 use_stdin=use_stdin)
            # Print cluster job script
            if self.debug:
                print(cluster.job_script())
        # Return initialized cluster
        return cluster

    async def __keep_workers_alive(self):
        # While the job is still executing
        while True:
            # Wait a second
            await asyncio.sleep(WORKER_CHECK_INTERVAL)
            # Check workers
            self.__wait_until_workers_alive()

    def __read_parquet(self, log_dir: str, engine="pyarrow-dataset"):
        # Read logs into a dataframe
        t_start = perf_counter()
        df = dd.read_parquet("{}/*.parquet".format(log_dir), engine=engine)
        t_end = perf_counter()
        t_elapsed = t_end - t_start
        # Print performance
        if self.debug:
            print(f"Reading logs took {t_elapsed} seconds")
        # Return job time
        return df, t_elapsed

    def __read_write_cond_io_df(self, io_df: DataFrame):
        # Prepare conditions
        read_condition = io_df['func_id'].isin(["read", "pread", "pread64", "readv"])
        write_condition = io_df['func_id'].isin(["write", "pwrite", "pwrite64", "writev"])
        # Return conditions
        return read_condition, write_condition

    def __read_write_cond_io_df_ext(self, io_df: DataFrame):
        # Prepare conditions
        read_condition = io_df['func_id'].isin(["read", "pread", "pread64", "readv"])
        fread_condition = io_df['func_id'].isin(["fread"])
        write_condition = io_df['func_id'].isin(["write", "pwrite", "pwrite64", "writev"])
        fwrite_condition = io_df['func_id'].isin(["fwrite"])
        # Return conditions
        return read_condition, fread_condition, write_condition, fwrite_condition

    def __set_bandwidths(self, io_df_read_write: DataFrame):
        correct_dur = ((io_df_read_write['tend'] - io_df_read_write['tstart']) > 0)
        io_df_read_write['bandwidth'] = 0
        io_df_read_write['bandwidth'] = io_df_read_write['bandwidth'].mask(
            correct_dur, io_df_read_write['size']*1.0/(io_df_read_write['tend'] - io_df_read_write['tstart'])/1024.0/1024.0)

    def __set_durations(self, io_df: DataFrame):
        # Set durations according tend - tstart
        io_df['duration'] = io_df['tend'] - io_df['tstart']

    def __set_filenames(self, io_df: DataFrame):
        # Prepare conditions
        read_condition, write_condition = self.__read_write_cond_io_df(io_df)
        open_condition = io_df['func_id'].str.contains("open")
        mpi_condition = io_df['func_id'].str.contains("MPI")
        fread_condition = io_df['func_id'].isin(["fread"])
        close_condition = io_df['func_id'].str.contains('close')
        fwrite_condition = io_df['func_id'].isin(["fwrite"])
        readdir_condition = io_df['func_id'].isin(["readdir"])
        # Then set corresponding filenames
        io_df['filename'] = ""
        io_df['filename'] = io_df['filename'].mask(open_condition & ~mpi_condition, io_df['args_1'])
        io_df['filename'] = io_df['filename'].mask(open_condition & mpi_condition, io_df['args_2'])
        io_df['filename'] = io_df['filename'].mask(close_condition, io_df['args_1'])
        io_df['filename'] = io_df['filename'].mask(read_condition, io_df['args_1'])
        io_df['filename'] = io_df['filename'].mask(fread_condition, io_df['args_4'])
        io_df['filename'] = io_df['filename'].mask(write_condition, io_df['args_1'])
        io_df['filename'] = io_df['filename'].mask(fwrite_condition, io_df['args_4'])
        # Lastly, fix slashes
        io_df['filename'] = io_df['filename'].str.replace('//', '/')

    def __set_sizes_counts(self, io_df_read_write: DataFrame):
        # Prepare conditions
        read_condition, fread_condition, write_condition, fwrite_condition = self.__read_write_cond_io_df_ext(io_df_read_write)
        readdir_condition = io_df_read_write['func_id'].isin(["readdir"])
        # Then set corresponding sizes & counts
        io_df_read_write['size'] = 0
        io_df_read_write['count'] = 1
        io_df_read_write['size'] = io_df_read_write['size'].mask(read_condition, io_df_read_write['args_3'])
        io_df_read_write['size'] = io_df_read_write['size'].mask(fread_condition, io_df_read_write['args_3'])
        io_df_read_write['count'] = io_df_read_write['count'].mask(fread_condition, io_df_read_write['args_2'])
        io_df_read_write['size'] = io_df_read_write['size'].mask(write_condition, io_df_read_write['args_3'])
        io_df_read_write['size'] = io_df_read_write['size'].mask(fwrite_condition, io_df_read_write['args_3'])
        io_df_read_write['count'] = io_df_read_write['count'].mask(fwrite_condition, io_df_read_write['args_2'])
        # Handle corner cases
        io_df_read_write['size'] = io_df_read_write['size'].mask(readdir_condition, "0")
        io_df_read_write['count'] = io_df_read_write['count'].mask(readdir_condition, "1")
        # Set data types
        io_df_read_write[['size', 'count']] = io_df_read_write[['size', 'count']].astype(float)

    def __split_read_write_metadata(self, io_df: DataFrame, compute=False):
        # Prepare conditions
        read_condition, write_condition = self.__read_write_cond_io_df(io_df)
        # Then compute read & write and metadata dataframes
        io_df_read_write = io_df[read_condition | write_condition]
        io_df_metadata = io_df[~read_condition & ~write_condition]
        # Set additional columns
        self.__set_sizes_counts(io_df_read_write)
        self.__set_bandwidths(io_df_read_write)
        # Compute if specified
        if compute:
            io_df_read_write = io_df_read_write.compute()
            io_df_metadata = io_df_metadata.compute()
        # Return computed dataframes
        return io_df_read_write, io_df_metadata

    def __wait_until_workers_alive(self):
        # Get current number of workers
        current_n_workers = self._current_n_workers()
        # Wait until enough number of workers alive
        while (self.client.status == "running" and current_n_workers < self.n_workers):
            # Print current status
            if self.debug:
                print(f"{current_n_workers}/{self.n_workers} workers running", end="\r")
            # Try correcting state
            self.cluster._correct_state()
            # Sleep a little
            sleep(WORKER_CHECK_INTERVAL)
            # Get current number of workers
            current_n_workers = self._current_n_workers()
        # Print result
        if self.debug:
            print(f"All {self.n_workers} workers alive", end="")
