#!/bin/bash

source ~/.mummi/config.mummi.sh
pushd $MUMMI_ROOT

bsub -J Campaign4 -nnodes $MUMMI_NNODES -W 30 -core_isolation 0 -G asccasc -q pdebug $MUMMI_APP/setup/master_batch.sh $MUMMI_NNODES
