#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

export OMP_NUM_THREADS=1

main_dir=$PWD
source $PWD/setup_object_detection.sh
#jsrun --np 1 \
cd code/TensorFlow/Object_detection/
python3 ./train.py --config \
    MODE_MASK=True MODE_FPN=True \
    DATA.BASEDIR=$main_dir/data/coco \
    BACKBONE.WEIGHTS=$main_dir/data/coco/ImageNet-R50-AlignPadding.npz
    #TRAINER=horovod \
