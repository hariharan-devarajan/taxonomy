#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
source ${SCRIPT_DIR}/../../setup.sh
PEGASUS_HOME_INSTALL=${IOPP_PROJECT_HOME}/software/pegasus-5.1.0dev
echo "Job Launched in directory $SCRIPT_DIR"
pushd $PEGASUS_SCRATCH_DIR
cp $_CONDOR_SCRATCH_DIR/*.in .

IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    IOPP_DATE=$(date '+%Y%m%d')
    CM1_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/montage-2mass-2deg_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_${IOPP_DATE}
    mkdir -p ${CM1_DFTRACER_LOG_DIR}
    IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_ENABLE=1
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_LOG_FILE=${CM1_DFTRACER_LOG_DIR}/montage
    export DFTRACER_DATA_DIR=all
    export DFTRACER_INC_METADATA=1
fi
cmd="flux run  -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN}  ${IOPP_PRELOAD} ${PEGASUS_HOME_INSTALL}/bin/pegasus-mpi-cluster -v $@"
echo "Running Montage Workflow Pegasus $cmd"

${cmd}

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    pushd $CM1_DFTRACER_LOG_DIR
        gzip *.pfw
    popd
fi
