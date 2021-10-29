#!/bin/bash
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/lbann-atom
#BSUB -o /usr/workspace/iopp/software/iopp/apps/lbann-atom/out.log
#BSUB -e /usr/workspace/iopp/software/iopp/apps/lbann-atom/err.log
#BSUB -nnodes 32
#BSUB -W 1:00
#BSUB -J atom

#BSUB -G asccasc

export MAX_SEQ_LEN=57
export DATA_PATH=/p/gpfs1/brainusr/datasets/zinc/moses_zinc_train250K.npy
export DATA_CONFIG=/usr/workspace/iopp/applications/lbann/applications/ATOM/zinc_data_config.json 


export MV2_USE_RDMA_CM=0
export AL_PROGRESS_RANKS_PER_NUMA_NODE=2
export OMP_NUM_THREADS=8
export IBV_FORK_SAFE=1
export HCOLL_ENABLE_SHARP=0
export OMPI_MCA_coll_hcoll_enable=0
export PAMI_MAX_NUM_CACHED_PAGES=0
export NVSHMEM_MPI_LIB_NAME=libmpi_ibm.so
echo "Started at $(date)"

export RECORDER_EXCLUSION_FILE=/g/g92/haridev/exclusion_prefix.txt
SO=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
jsrun --env LD_PRELOAD=$SO --bind packed:8 --smpiargs="-gpu" --chdir /usr/workspace/iopp/software/iopp/apps/lbann-atom --nrs 32 --rs_per_host 1 --tasks_per_rs 4 --launch_distribution packed --cpu_per_rs ALL_CPUS --gpu_per_rs ALL_GPUS lbann --procs_per_trainer=4 --vocab=None --num_samples=None --sequence_length=57  --num_io_threads=11 --no_header=True --delimiter=c --prototext=/usr/workspace/iopp/software/iopp/apps/lbann-atom/experiment.prototext
status=$?
echo "Finished at $(date)"
exit ${status}
