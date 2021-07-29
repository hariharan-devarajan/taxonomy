#!/bin/bash
set -x

# Load relevant modules
module load gcc/8.3.1 cuda/10.2.89 cudnn-7.6.5.32-10.2-linux-ppc64le-gcc-8.3.1-eg2jjvu

# add conda channel
#conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda/

# set relevant build variables for horovod
export ENV_PREFIX=$PWD/env_cycle_gan_pt_env
export NCCL_HOME=$ENV_PREFIX

# create the conda environment
conda env create --prefix $ENV_PREFIX --file env_cycle_gan_pt_ppc64le.yml --force
