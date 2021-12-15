#!/bin/bash

source ~/.mummi/config.mummi.sh
pushd $MUMMI_ROOT
export pfs=/p/gpfs1/iopp
export RECORDER_TRACES_DIR=/p/gpfs1/iopp/recorder_logs/mummi_${LSB_JOBID}_${MUMMI_NNODES}
tracer_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
#export LD_PRELOAD=$tracer_lib_path
#export RECORDER_NO_MPI=1
#-env "all, LD_PRELOAD=$tracer_lib_path, RECORDER_NO_MPI=1"
bsub -J Campaign4 -nnodes $MUMMI_NNODES -W "12:00" -core_isolation 0 -G asccasc -q pbatch $MUMMI_APP/setup/master_batch.sh $MUMMI_NNODES
