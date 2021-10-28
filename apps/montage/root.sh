#!/bin/bash

#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 32
#BSUB -W 02:00

NUM_NODES=4

jsrun --nrs $NUM_NODES -c 1 -r 1 $PWD/montage.sh

echo "Finished all workflow"
