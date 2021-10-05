#!/bin/bash
### LSF syntax
#BSUB -nnodes 32         #number of nodes
#BSUB -W 02:00              #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J hacc-io  #name of job
#BSUB -q pbatch             #queue to use
NUM_NODES=32

export RECORDER_TRACES_DIR=/p/gpfs1/haridev/iopp/recorder_logs
APP_DIR=/usr/workspace/iopp/applications/hacc-io.1.0/install

tracer_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so

PROCS_PER_NODE=40
NUM_PARTICLES=$((1024*1024*16))

DATA_DIR=$pfs/temp/hacc_file
rm -f $pfs/temp/hacc_file* 

lrun -N$NUM_NODES -T$PROCS_PER_NODE --env "LD_PRELOAD=$tracer_lib_path" $APP_DIR/hacc_io $NUM_PARTICLES $DATA_DIR
