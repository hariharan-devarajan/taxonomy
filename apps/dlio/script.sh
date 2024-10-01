#!/bin/bash

SCRIPT_DIR=$1

pushd ${SCRIPT_DIR}

echo "Sourcing setup"
source ../../setup.sh

export IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}
date_echo "Loading environment"
source $IOPP_ENV_VENVS/scr_dlio_env/bin/activate


date_echo "Setting script variables"
export PYTHONPATH=${IOPP_PROJECT_HOME}/apps/dlio:$PYTHONPATH
export IOPP_DLIO_WORKLOAD=${IOPP_NAME}
export IOPP_JOB_SPACE=${IOPP_JOB_PFS}/${IOPP_NAME}
export IOPP_JOB_SPACE_DATA=${IOPP_JOB_PFS}/${IOPP_NAME}/data
export IOPP_JOB_SPACE_CHECKPOINT=${IOPP_JOB_PFS}/${IOPP_NAME}/checkpoint
export DLIO_LOG_DIR="${IOPP_PROJECT_HOME}/apps/dlio/output/${IOPP_JOB_NAME}_$((IOPP_JOB_NODES))_$((IOPP_JOB_GPUS))"
export DLIO_LOG_DIR_ARGS="++workload.output.folder=${DLIO_LOG_DIR}"
export DLIO_DATA_DIR="++workload.dataset.data_folder=${IOPP_JOB_SPACE_DATA}" 
export DLIO_CHECKPOINT_DIR="++workload.checkpoint.checkpoint_folder=${IOPP_JOB_SPACE_CHECKPOINT}"
export DLIO_DATA_ARGS="${DLIO_DATA_DIR} ${DLIO_CHECKPOINT_DIR}"
export DLIO_DATA_GENERATE_ARGS="++workload.workflow.generate_data=True ++workload.workflow.train=False"
export DLIO_TRAIN_ARGS="++workload.workflow.generate_data=False ++workload.workflow.train=True"
export DLIO_WORKER_ARGS="++workload.reader.read_threads=${IOPP_DLIO_READERS}"

date_echo "Create required directories"
mkdir -p ${DLIO_LOG_DIR}  ${IOPP_JOB_SPACE_DATA} ${IOPP_JOB_SPACE_CHECKPOINT}
rm -rf ${DLIO_LOG_DIR}/*
rm -rf ${IOPP_JOB_SPACE_CHECKPOINT}/*


data_files=$(find ${IOPP_JOB_SPACE_DATA} -type f | wc -l)
if [[ "${data_files}" == "0" ]]; then
    date_echo "No dataset found, Generating dataset for ${IOPP_NAME}"
    cmd="flux run -N $((IOPP_JOB_NODES)) --tasks-per-node=$((IOPP_JOB_PPN)) dlio_benchmark workload=${IOPP_NAME} ${DLIO_DATA_ARGS} ${DLIO_DATA_GENERATE_ARGS}"
    date_echo "Running Generation $cmd"
    $cmd
    data_files=$(find ${IOPP_JOB_SPACE_DATA} -type f | wc -l)
    date_echo "Dataset with ${data_files} files generated for workload ${IOPP_NAME}"
    date_echo "Cleaning hydra_log generated."
    rm -rf ${IOPP_PROJECT_HOME}/apps/dlio/hydra_log
else
    date_echo "Dataset with ${data_files} files found for ${IOPP_NAME} at ${IOPP_JOB_SPACE_DATA}"
fi

IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Setting profiling variables for DFTracer"
    export DFTRACER_ENABLE=1
    export DFTRACER_INC_METADATA=1
    export DFTRACER_LOG_FILE=${DLIO_LOG_DIR}/${IOPP_NAME}
    IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_DATA_DIR=all
fi
cmd="flux run -N $((IOPP_JOB_NODES)) --tasks-per-node=$((IOPP_JOB_GPUS)) --cores=$((IOPP_JOB_NODES*IOPP_JOB_PPN)) ${IOPP_PRELOAD} dlio_benchmark workload=${IOPP_NAME} ${DLIO_LOG_DIR_ARGS} ${DLIO_DATA_ARGS} ${DLIO_TRAIN_ARGS} ${DLIO_WORKER_ARGS}"
date_echo "Running Training for ${IOPP_NAME} with $cmd"

${cmd}

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Compressing DFTracer Log files in $DLIO_LOG_DIR"
    pushd $DLIO_LOG_DIR
        gzip *.pfw
        rm *.json
        rm *.log
    popd
fi
date_echo "Finished executing app"