#!/bin/bash
set -x

# Load relevant modules
module load gcc/8.3.1 cuda/10.2.89

# add conda channel
#conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda/

# set relevant build variables for horovod
export ENV_PREFIX=$PWD/env_object_detection_pt_env
export NCCL_HOME=$ENV_PREFIX
export CFLAGS="-D_GLIBCXX_USE_CXX11_ABI=0 $CFLAGS"
# create the conda environment
conda env create --prefix $ENV_PREFIX --file env_object_detection_pt_ppc64le.yml --force
