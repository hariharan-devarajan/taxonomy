#!/bin/bash
### LSF syntax
#BSUB -nnodes 32         #number of nodes
#BSUB -W 02:00              #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J hacc-io  #name of job
#BSUB -q pbatch             #queue to use
source /usr/workspace/iopp/install_scripts/bin/iopp-init
NUM_NODES=32
APP_DIR=/usr/workspace/iopp/applications/hacc-io.1.0/install/bin

tracer_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so

PROCS_PER_NODE=40
NUM_PARTICLES=$((1024*1024*16))

DATA_DIR=$pfs/temp/hacc_dir/
mkdir -p $DATA_DIR
rm -f $DATA_DIR/* 

lrun -N$NUM_NODES -T$PROCS_PER_NODE --env "LD_PRELOAD=$tracer_lib_path" $APP_DIR/hacc_io $NUM_PARTICLES $DATA_DIR/test
