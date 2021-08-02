#!/usr/bin/bash

set -x

#source ~/.profile
module load gcc/8.3.1 cuda/10.2.89 cmake/3.20.2 python/3.7.2
/p/gpfs1/haridev/software/anaconda3/bin/conda init bash
conda activate $PWD/env
