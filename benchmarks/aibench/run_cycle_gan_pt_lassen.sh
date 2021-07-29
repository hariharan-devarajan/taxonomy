#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

source $PWD/setup_cycle_gan_pt.sh
#jsrun --np 1 \
main_dir=$PWD
cd code/PyTorch/Image_to_Image/CycleGAN/
python train.py --dataroot $main_dir/code/TensorFlow/Image_to_Image/CycleGAN/input/maps --name maps_cyclegan --model cycle_gan
