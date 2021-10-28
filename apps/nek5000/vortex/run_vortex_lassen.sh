#!/bin/bash
### LSF syntax
#BSUB -nnodes 4        #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J nek500_vortex     #name of job
#BSUB -q pbatch             #queue to use
NUM_NODES=4

source ~/.profile
source iopp-init

APP_DIR=/usr/workspace/iopp/applications/Nek5000
CASE_DIR=$APP_DIR/run/vortex
BIN_DIR=$APP_DIR/bin
cd $CASE_DIR

CASE_NAME=r1854a
PROCS_PER_NODE=35

tracer_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
echo $CASE_NAME  >  SESSION.NAME
echo $CASE_DIR/ >>  SESSION.NAME

lrun -N$NUM_NODES -T$PROCS_PER_NODE --env "LD_PRELOAD=$tracer_lib_path" $CASE_DIR/nek5000
