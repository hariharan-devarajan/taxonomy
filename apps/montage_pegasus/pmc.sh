#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
source ${SCRIPT_DIR}/../../setup.sh
PEGASUS_HOME_INSTALL=${IOPP_PROJECT_HOME}/software/pegasus-5.1.0dev
echo "Job Launched in directory $SCRIPT_DIR"
pushd $PEGASUS_SCRATCH_DIR
cp $_CONDOR_SCRATCH_DIR/*.in .
export IOPP_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_JOB_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}

IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    IOPP_DATE=$(date '+%Y%m%d')
    mkdir -p ${IOPP_DFTRACER_LOG_DIR}
    IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_ENABLE=1
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_LOG_FILE=${IOPP_DFTRACER_LOG_DIR}/montage
    export DFTRACER_DATA_DIR=all
    export DFTRACER_INC_METADATA=1
fi
cmd="flux run  -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN}  ${IOPP_PRELOAD} ${PEGASUS_HOME_INSTALL}/bin/pegasus-mpi-cluster -v $@"
echo "Running Montage Workflow Pegasus $cmd"

${cmd}

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    pushd $IOPP_DFTRACER_LOG_DIR
        JOBS_LIMIT=1024
        files=(*.pfw)
        total=${#files[@]}
        for file_index in "${!files[@]}"; do
        running_jobs=$(jobs -rp | wc -l)
        if [ $running_jobs -ge $JOBS_LIMIT ]; then
            date_echo "waiting for Running $running_jobs jobs to be less than $JOBS_LIMIT"
            while [ $running_jobs -ge $JOBS_LIMIT ]
            do
                sleep 1
                running_jobs=$(jobs -rp | wc -l)
            done
            date_echo "Running $running_jobs jobs are now less than $JOBS_LIMIT"
        fi
        ((
            file_name=${files[$file_index]}
            flux submit -n 1 -c 1 gzip -f $file_name > /dev/null 2>&1
            progress_date_echo "Submitted $file_index of $total"
        ) &)
        done
        wait
        num_pfw=$(ls ${IOPP_DFTRACER_LOG_DIR}/* | grep pfw | wc -l)
        num_gz=$(ls ${IOPP_DFTRACER_LOG_DIR}/* | grep gz | wc -l)
        previous_ct=""
        while [ "${num_gz}" -le "${num_pfw}" ]; do            
            if [[ "${num_gz}" != "${previous_ct}" ]]; then
                date_echo "Completed $num_gz of $num_pfw"
            fi
            previous_ct=$num_gz
            sleep 10
            num_gz=$(ls ${IOPP_DFTRACER_LOG_DIR}/* | grep gz | wc -l)
            
        done
    popd
fi
