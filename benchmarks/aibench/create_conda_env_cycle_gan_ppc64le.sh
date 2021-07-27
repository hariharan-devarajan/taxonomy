#!/bin/bash
set -x

# Load relevant modules
module load gcc/8.3.1 cuda/10.2.89

# add conda channel
#conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda/

# set relevant build variables for horovod
export ENV_PREFIX=$PWD/env_cycle_gan_env
export NCCL_HOME=$ENV_PREFIX
export HOROVOD_CUDA_HOME=$CUDA_HOME
export HOROVOD_NCCL_HOME=$NCCL_HOME
export HOROVOD_NCCL_LINK=SHARED
export HOROVOD_GPU_OPERATIONS=NCCL

# create the conda environment
conda env create --prefix $ENV_PREFIX --file env_cycle_gan_ppc64le.yml --force