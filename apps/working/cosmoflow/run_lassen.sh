#!/bin/bash
### LSF syntax
#BSUB -nnodes 16           #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pbatch             #queue to use

source $PWD/setup.sh

srun --np 64 \
python \
code/train.py \
--data-dir /p/gpfs1/haridev/datasets/cosmoflow/tf_record \
--output-dir output \
-v \
configs/cosmo.yaml
