#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

source $PWD/setup.sh
#jsrun --np 1 \

python ./code/tf2/main-gan.py -gpus=0 -expName=test -maxiter=1 -dsfn=data/demo-dataset-real.h5
