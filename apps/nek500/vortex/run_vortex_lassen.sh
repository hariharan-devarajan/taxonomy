#!/bin/bash
### LSF syntax
#BSUB -nnodes 32          #number of nodes
#BSUB -W 15                 #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J nek500_vortex     #name of job
#BSUB -q pbatch             #queue to use
NUM_NODES=32

source ~/.profile
source iopp-init

APP_DIR=/usr/workspace/iopp/applications/Nek5000
CASE_DIR=$APP_DIR/run/vortex
BIN_DIR=$APP_DIR/bin
cd $CASE_DIR

CASE_NAME=r1854a
PROCS_PER_NODE=40
TOTAL_PROCS=$((NUM_NODES*PROCS_PER_NODE))
echo $CASE_NAME  >  SESSION.NAME
echo `pwd`'/' >>  SESSION.NAME

srun -N $NUM_NODES --ntasks-per-node $PROCS_PER_NODE -n $TOTAL_PROCS ./nek5000
