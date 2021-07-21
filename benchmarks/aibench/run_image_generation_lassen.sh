#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

source $PWD/setup_image_generation.sh
#jsrun --np 1 \

cd code/TensorFlow/Image_generation/
python train.py --model DCGAN -D LSUN 
