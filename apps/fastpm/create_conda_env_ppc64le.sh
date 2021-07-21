#!/bin/bash
set -exo pipefail

# Load relevant modules
module load gcc/8.3.1 spectrum-mpi/rolling-release

# add conda channel
conda config --prepend channels bccp

# set relevant build variables for horovod
export ENV_PREFIX=$PWD/env

# create the conda environment
conda env create --prefix $ENV_PREFIX --file environment_ppc64le.yml --force
