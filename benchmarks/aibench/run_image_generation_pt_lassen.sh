#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

source $PWD/setup_image_generation_pt.sh
#jsrun --np 1 \

echo $LD_LIBRARY_PATH
main_fld=$PWD
cd code/PyTorch/Image_generation/WGAN/
python main.py --workers 16 --dataset lsun --dataroot $main_fld/code/PyTorch/Image_generation/lsun --cuda 
