#!/bin/bash

SCRIPT_DIR=$1

pushd ${SCRIPT_DIR}

echo "Sourcing setup"
source ../../setup.sh

export IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}
date_echo "Loading environment"
if [[ "${IOPP_NAME}" == "megatron_deepspeed" ]]; then
source $IOPP_ENV_VENVS/scr_dlio_env/bin/activate
else
source $IOPP_ENV_VENVS/dlio_venv/bin/activate
fi

date_echo "Setting script variables"
export PYTHONPATH=${IOPP_PROJECT_HOME}/apps/dlio:$PYTHONPATH
export IOPP_DLIO_WORKLOAD=${IOPP_NAME}
export IOPP_JOB_SPACE=${IOPP_JOB_PFS}/${IOPP_NAME}
export IOPP_JOB_SPACE_DATA=${IOPP_JOB_PFS}/${IOPP_NAME}/data
export IOPP_JOB_SPACE_CHECKPOINT=${IOPP_JOB_PFS}/${IOPP_NAME}/checkpoint
export DLIO_LOG_DIR="${IOPP_PROJECT_HOME}/apps/dlio/output/${IOPP_JOB_NAME}_$((IOPP_JOB_NODES))_$((IOPP_JOB_GPUS))"
export DLIO_DATA_DIR="++workload.dataset.data_folder=${IOPP_JOB_SPACE_DATA}" 
export DLIO_CHECKPOINT_DIR="++workload.checkpoint.checkpoint_folder=${IOPP_JOB_SPACE_CHECKPOINT}"
export DLIO_DATA_ARGS="${DLIO_DATA_DIR} ${DLIO_CHECKPOINT_DIR}"
export DLIO_DATA_GENERATE_ARGS="++workload.workflow.generate_data=True ++workload.workflow.train=False"
export DLIO_TRAIN_ARGS="++workload.workflow.generate_data=False ++workload.workflow.train=True"
export DLIO_WORKER_ARGS="++workload.reader.read_threads=${IOPP_DLIO_READERS}"
if [[ "${IOPP_NAME}" == "megatron_deepspeed" ]] && [[ "${IOPP_DLIO_SCR}" != "0" ]] && [[ "${IOPP_DLIO_CHECKPOINT}" != "" ]]; then
    date_echo "Configure Checkpointing with SCR for DLIO"
    export DLIO_LOG_DIR="${IOPP_PROJECT_HOME}/apps/dlio/output/${IOPP_JOB_NAME}_$((IOPP_JOB_NODES))_$((IOPP_JOB_GPUS))_${IOPP_DLIO_SCR_OPT}_axl${IOPP_DLIO_AXL_THREADS}"
fi
export DLIO_LOG_DIR_ARGS="++workload.output.folder=${DLIO_LOG_DIR}"

export PYTHONPATH=/usr/workspace/haridev/iopp/software/scr-dlio:$PYTHONPATH


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
    # exit 1
else
    date_echo "Dataset with ${data_files} files found for ${IOPP_NAME} at ${IOPP_JOB_SPACE_DATA}"
fi
DLIO_CHECKPOINT_ARGS=""
if [[ "${IOPP_NAME}" == "megatron_deepspeed" ]] && [[ "${IOPP_DLIO_CHECKPOINT_STEPS}" != "" ]]; then
    DLIO_CHECKPOINT_ARGS="++workload.checkpoint.steps_between_checkpoints=${IOPP_DLIO_CHECKPOINT_STEPS}"
fi
DLIO_CHECKPOINT_TYPE_ARGS=""
if [[ "${IOPP_NAME}" == "megatron_deepspeed" ]] && [[ "${IOPP_DLIO_SCR}" != "0" ]] && [[ "${IOPP_DLIO_CHECKPOINT}" != "" ]]; then
    date_echo "Configure Checkpointing with SCR for DLIO"
    DLIO_CHECKPOINT_TYPE_ARGS="++workload.checkpoint.checkpoint_mechanism_classname=${IOPP_DLIO_CHECKPOINT} "
    # SCR Configuration
    export SCR_CACHE_BASE=/l/ssd/haridev/scr/checkpoints/scr_megatron_deepspeed # /dev/shm
    export SCR_CACHE_SIZE=16
    export SCR_FLUSH_ASYNC=1
    export SCR_FLUSH=1
    export SCR_FLUSH_TYPE=PTHREAD
    export SCR_CACHE_BYPASS=0
    export SCR_CACHE_PURGE=1
    export SCR_PREFIX=${IOPP_JOB_SPACE_CHECKPOINT}
    #export SCR_DEBUG=1
    if [[ "${IOPP_DLIO_SCR_OPT}" == "1" ]]; then
        export SCR_COPY_TYPE=SINGLE
        export SCR_FILE_BUF_SIZE=1875123200 # 1.74 GB
    fi
    rm -rf ${SCR_CACHE_BASE}
    mkdir -p ${SCR_CACHE_BASE}
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
    export DFTRACER_LOG_LEVEL=INFO
fi
cmd="flux run -N $((IOPP_JOB_NODES)) --tasks-per-node=$((IOPP_JOB_GPUS)) --cores=$((IOPP_JOB_NODES*IOPP_JOB_CORES)) ${IOPP_PRELOAD} dlio_benchmark workload=${IOPP_NAME} ${DLIO_LOG_DIR_ARGS} ${DLIO_DATA_ARGS} ${DLIO_TRAIN_ARGS} ${DLIO_WORKER_ARGS} ${DLIO_CHECKPOINT_ARGS} ${DLIO_CHECKPOINT_TYPE_ARGS}"
date_echo "Running Training for ${IOPP_NAME} with $cmd"

${cmd}

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Compressing DFTracer Log files in $DLIO_LOG_DIR"
    pushd $DLIO_LOG_DIR
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
        num_pfw=$(ls ${DLIO_LOG_DIR}/* | grep pfw | wc -l)
        num_gz=$(ls ${DLIO_LOG_DIR}/* | grep gz | wc -l)
        previous_ct=""
        while [ "${num_gz}" -lt "${num_pfw}" ]; do            
            if [[ "${num_gz}" != "${previous_ct}" ]]; then
                date_echo "Completed $num_gz of $num_pfw"
            fi
            previous_ct=$num_gz
            sleep 10
            num_gz=$(ls ${DLIO_LOG_DIR}/* | grep gz | wc -l)
            
        done
        gzip *.pfw
        rm *.json
    popd
fi
date_echo "Finished executing app"