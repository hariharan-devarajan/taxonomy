#!/bin/bash
set -exo pipefail

# Load relevant modules
module load gcc/8.3.1 cuda/10.2.89

# add conda channel
#conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda/

# set relevant build variables for horovod
export ENV_PREFIX=$PWD/env
export NCCL_HOME=$ENV_PREFIX

# create the conda environment
conda env create --prefix $ENV_PREFIX --file environment_ppc64le.yml --force
