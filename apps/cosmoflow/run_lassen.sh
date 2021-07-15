#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

$PWD/setup.sh
jsrun --np 1 \
env/bin/python \
code/train.py \
--data-dir $PWD/data/output \
--output-dir output \
-v \
configs/cosmo.yaml
