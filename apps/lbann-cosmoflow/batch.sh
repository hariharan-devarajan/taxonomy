#!/bin/bash
#BSUB -cwd /usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow
#BSUB -o /usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow/out.log
#BSUB -e /usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow/err.log
#BSUB -nnodes 32
#BSUB -W 06:00
#BSUB -J lbann_cosmoflow
#BSUB -q pbatch
#BSUB -G asccasc

source /usr/workspace/iopp/install_scripts/bin/iopp-init
source /usr/workspace/iopp/install_scripts/bin/spack-init

spack env activate -p lbann-cosmoflow-power9le
module load spectrum-mpi/2020.08.19

export DISTCONV_WS_CAPACITY_FACTOR=0.8
export DISTCONV_OVERLAP_HALO_EXCHANGE=1
export LBANN_DISTCONV_HALO_EXCHANGE=HYBRID
export LBANN_DISTCONV_TENSOR_SHUFFLER=HYBRID
export LBANN_DISTCONV_CONVOLUTION_FWD_ALGORITHM=AUTOTUNE
export LBANN_DISTCONV_CONVOLUTION_BWD_DATA_ALGORITHM=AUTOTUNE
export LBANN_DISTCONV_CONVOLUTION_BWD_FILTER_ALGORITHM=AUTOTUNE
export LBANN_DISTCONV_RANK_STRIDE=1
export LBANN_DISTCONV_COSMOFLOW_PARALLEL_IO=False
export LBANN_DISTCONV_NUM_IO_PARTITIONS=4
export LBANN_KEEP_ERROR_SIGNALS=1
export MV2_USE_RDMA_CM=0
export AL_PROGRESS_RANKS_PER_NUMA_NODE=2
export OMP_NUM_THREADS=8
export IBV_FORK_SAFE=1
export HCOLL_ENABLE_SHARP=0
export OMPI_MCA_coll_hcoll_enable=0
export PAMI_MAX_NUM_CACHED_PAGES=0
export NVSHMEM_MPI_LIB_NAME=libmpi_ibm.so
export LBANN_NUM_IO_THREADS=1
echo "Started at $(date)"
recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so

#jsrun --env LD_PRELOAD=$recorder_lib_path --bind packed:8 --smpiargs="-gpu" --chdir /usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow --nrs 32 --rs_per_host 1 --tasks_per_rs 4 --launch_distribution packed --cpu_per_rs ALL_CPUS --gpu_per_rs ALL_GPUS lbann --prototext=/usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow/experiment.prototext
jsrun --bind packed:8 --smpiargs="-gpu" --chdir /usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow --nrs 32 --rs_per_host 1 --tasks_per_rs 4 --launch_distribution packed --cpu_per_rs ALL_CPUS --gpu_per_rs ALL_GPUS lbann --prototext=/usr/WS2/iopp/software/iopp/apps/lbann-cosmoflow/experiment.prototext
status=$?
echo "Finished at $(date)"
exit ${status}
