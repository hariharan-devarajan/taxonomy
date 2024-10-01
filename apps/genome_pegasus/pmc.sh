#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
source ${SCRIPT_DIR}/../../setup.sh
PEGASUS_HOME_INSTALL=${IOPP_PROJECT_HOME}/software/pegasus-5.1.0dev
echo "Job Launched in directory $SCRIPT_DIR"

IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    export CM1_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/genome_pegasus/dftracer/${IOPP_JOB_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}
    IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_ENABLE=1
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_LOG_FILE=${CM1_DFTRACER_LOG_DIR}/genome
    export DFTRACER_DATA_DIR=$IOPP_PROFILER_DATA_DIR
    export DFTRACER_INC_METADATA=1
    export DFTRACER_LOG_LEVEL=DEBUG
fi
cmd="flux run  -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} --cores=$((IOPP_JOB_PPN * IOPP_JOB_NODES))  ${IOPP_PRELOAD} ${PEGASUS_HOME_INSTALL}/bin/pegasus-mpi-cluster -v $@"
echo "Running Genome Workflow Pegasus $cmd"

${cmd}

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    echo "Compressing DFTracer Log files in $CM1_DFTRACER_LOG_DIR"
    pushd $CM1_DFTRACER_LOG_DIR
        gzip *.pfw
    popd
fi
