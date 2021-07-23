#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

source $PWD/setup_cycle_gan.sh
#jsrun --np 1 \
cd code/TensorFlow/Image_to_Image/CycleGAN/
python3 create_cyclegan_dataset.py --image_path_a=./input/maps/trainA --image_path_b=./input/maps/trainB --dataset_name="maps_train" --do_shuffle=0
