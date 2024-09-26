#!/bin/bash

IOPP_APP_NAME=cm1
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

pushd ${SCRIPT_DIR}

echo "Sourcing setup"
source ../../setup.sh

echo "Setting env variable"
IOPP_RUN_DIR=${IOPP_JOB_PFS}/iopp/run_dir/${IOPP_APP_NAME}.${IOPP_JOB_ID}
CM1_INSTALL_BIN=${IOPP_PROJECT_HOME}/apps/cm1r20.3/install/bin
CM1_LOG_DIR=${IOPP_PROJECT_HOME}/apps/cm1r20.3/logs
IOPP_DATE=$(date '+%Y%m%d')
CM1_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/cm1r20.3/dftracer/cm1_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_${IOPP_DATE}
IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}

echo "Creating directories"
mkdir -p ${CM1_LOG_DIR}

echo "Creating $IOPP_RUN_DIR"
mkdir -p $IOPP_RUN_DIR
if [[ "$IOPP_JOB_CLEAN" == "1" ]]; then
    echo "Cleaning $IOPP_RUN_DIR"
    rm -rf $IOPP_RUN_DIR/*
fi

echo "Copy CM1 binary to $IOPP_RUN_DIR"
cp -r $CM1_INSTALL_BIN/* $IOPP_RUN_DIR


echo "Update configuration $IOPP_RUN_DIR/namelist.input"

sed -i "s/ nx           =      60,/ nx           =      120,/" $IOPP_RUN_DIR/namelist.input
sed -i "s/ ny           =      60,/ ny           =      120,/" $IOPP_RUN_DIR/namelist.input
#sed -i "s/ nz           =      40,/ nz           =      80,/" $run_dir/namelist.input
sed -i "s/ ppnode       =      1,/ ppnode       =      $IOPP_JOB_PPN,/" $IOPP_RUN_DIR/namelist.input
echo "Check configuration $IOPP_RUN_DIR/namelist.input"
cat $IOPP_RUN_DIR/namelist.input | grep ppnode

IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    mkdir -p ${CM1_DFTRACER_LOG_DIR}
    IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_ENABLE=1
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_LOG_FILE=${CM1_DFTRACER_LOG_DIR}/cm1
    export DFTRACER_DATA_DIR=all
    export DFTRACER_INC_METADATA=1
fi

pushd $IOPP_RUN_DIR

cmd="flux run -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} -t ${IOPP_JOB_TIME} -q ${IOPP_JOB_QUEUE} ${IOPP_PRELOAD} ./cm1.exe"

echo "Running CM1 $cmd"
export OMPI_MCA_mpi_warn_on_fork=0
${cmd} > ${CM1_LOG_DIR}/$IOPP_JOB_OUT_LOG 2> ${CM1_LOG_DIR}/$IOPP_JOB_ERR_LOG

popd

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    pushd $CM1_DFTRACER_LOG_DIR
        gzip *.pfw
    popd
fi
