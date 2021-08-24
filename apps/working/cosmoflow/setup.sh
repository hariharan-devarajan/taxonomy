#!/usr/bin/bash

set -x

#source ~/.profile
module load gcc/8.3.1 cuda/10.2.89 cmake/3.20.2 python/3.7.2
source /p/gpfs1/haridev/software/anaconda3/etc/profile.d/conda.sh
conda activate $PWD/env
export LC_ALL=en_US.utf-8
export LANG=en_US.utf-8
