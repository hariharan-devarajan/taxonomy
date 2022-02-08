#!/bin/bash --login

#set -exo pipefail
conda config --prepend channels conda-forge
conda config --prepend channels anaconda
conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda-early-access/



# set relevant build variables for horovod
export ENV_PREFIX=/p/gpfs1/iopp/conda/galaxy-pegasus-conda/env

# create the conda environment
conda env create --prefix $ENV_PREFIX --file environment.yml --force
