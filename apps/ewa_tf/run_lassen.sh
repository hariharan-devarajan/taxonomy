#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use
set +x
#$PWD/setup.sh

export PYTHONPATH=$PWD/code/dotpy_src/load_data/datasets/climate/:$PWD/code/dotpy_src/box_processing/:$PWD/code/dotpy_src:$PWD/code/dotpy_src/load_data/:$PWD/code/dotpy_src/models/base/:$PYTHONPATH
#export CFLAGS="-I$PWD/env/include $CFLAGS"
#export LDFLAGS="-L$PWD/env/lib -L$PWD/env/lib64 $LDFLAGS"


#jsrun --np 1 \
env/bin/python code/main.py --tr_data_file $PWD/data/climo_2005.h5  --val_data_file $PWD/data/climo_2005.h5 --test_data_file $PWD/data/climo_2005.h5 --logs_dir $PWD/logs --num_epochs 20
