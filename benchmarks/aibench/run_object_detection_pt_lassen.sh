#!/bin/bash
### LSF syntax
#BSUB -nnodes 1             #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J cosmoflow          #name of job
#BSUB -q pdebug             #queue to use

export OMP_NUM_THREADS=1

main_dir=$PWD
source $PWD/setup_object_detection_pt.sh
#jsrun --np 1 \
cd code/PyTorch/Object_detection/

SCRIPTS_DIR=$PWD/scripts
DIR=$PWD/faster-rcnn.pytorch

# go into directory of `faster-rcnn.pytorch`
cd $DIR

set +x


# Trainning Configurations
GPU_ID=0
BATCH_SIZE=10
WORKER_NUMBER=10
LEARNING_RATE=0.001
DECAY_STEP=5


# CPU mode
#python trainval_net.py \
#    --dataset coco --net res101 \
#    --bs $BATCH_SIZE --nw $WORKER_NUMBER \
#    --lr $LEARNING_RATE --lr_decay_step $DECAY_STEP

# GPU mode
echo $PYTHONPATH
CUDA_VISIBLE_DEVICES=$GPU_ID python trainval_net.py \
                    --dataset coco --net res101 \
                    --bs $BATCH_SIZE --nw $WORKER_NUMBER \
                    --lr $LEARNING_RATE --lr_decay_step $DECAY_STEP \
                    --disp_interval 1 \
                    --cuda
