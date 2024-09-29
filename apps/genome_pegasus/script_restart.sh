#!/bin/bash

SCRIPT_DIR=$1

pushd ${SCRIPT_DIR}

echo "Sourcing setup"
source ../../setup.sh

IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}
PEGASUS_HOME_INSTALL=${IOPP_PROJECT_HOME}/software/pegasus-5.1.0dev
date_echo "Loading environment - Start"
source $IOPP_ENV_SPACK_ROOT/share/spack/setup-env.sh

spack env activate -p $IOPP_ENV_VENVS/genome_pegasus

spack load pegasus@5.1-dev condor@10
source $IOPP_ENV_VENVS/genome_pegasus_py/bin/activate

export PYTHONPATH=$(pegasus-config --python):$PYTHONPATH
source ${IOPP_PROJECT_HOME}/software/condor/condor.sh

condor_master

sleep 15
condor_q

condor_rm -all
sleep 15

date_echo "Loading environment - Done"


date_echo "Create worklow directory - Start"
export IOPP_JOB_SPACE=${IOPP_JOB_PFS}/${IOPP_JOB_NAME}/${IOPP_JOB_ID}
export IOPP_JOB_PFS_SCRATCH=${IOPP_JOB_SPACE}/scratch
export IOPP_JOB_PFS_OUTPUT=${IOPP_JOB_SPACE}/output
export IOPP_JOB_PFS_RUN_DIR=${IOPP_JOB_SPACE}/job
export CM1_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/genome_pegasus/dftracer/${IOPP_JOB_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}

#rm -v -rf ${CM1_DFTRACER_LOG_DIR}
#rm -rf ${IOPP_JOB_SPACE}

#mkdir -p ${IOPP_JOB_PFS_SCRATCH} ${IOPP_JOB_PFS_SCRATCH}/run_dir ${IOPP_JOB_PFS_RUN_DIR} ${CM1_DFTRACER_LOG_DIR} ${IOPP_JOB_PFS_OUTPUT}
pushd ${IOPP_JOB_PFS_SCRATCH}/run_dir
ulimit -c unlimited
popd
date_echo "Copy data"
#cp -r ${IOPP_PROJECT_HOME}/software/1000genome-workflow/* ${IOPP_JOB_PFS_RUN_DIR}
#sleep 5
date_echo "Copy scripts"
#cp -r ${IOPP_PROJECT_HOME}/apps/genome_pegasus/daxgen_corona.py ${IOPP_JOB_PFS_RUN_DIR}/daxgen_corona.py
#cp ${SCRIPT_DIR}/sites.yml.corona ${IOPP_JOB_PFS_RUN_DIR}/sites.corona.yml
#sed -i "s|IOPP_JOB_SPACE|$IOPP_JOB_SPACE|" ${IOPP_JOB_PFS_RUN_DIR}/sites.corona.yml
#sed -i  "s|PEGASUS_HOME_INSTALL|$PEGASUS_HOME_INSTALL|" ${IOPP_JOB_PFS_RUN_DIR}/sites.corona.yml

pushd ${IOPP_JOB_PFS_RUN_DIR}

date_echo "Create worklow directory - End"
date_echo "Create worklow - Start"
#./daxgen_corona.py -n run_dir --pmc

pushd run_dir

sleep 30
condor_q

date_echo "Plan worklow - End"
date_echo "Run worklow - Start"

pegasus-run $PWD

date_echo "Waiting for job to run a bit"
sleep 120

num_tasks=$(cat 00/00/merge_whole-wf.in | grep TASK | wc -l)
date_echo "Total Tasks ${num_tasks}"
cat jobstate.log
tail -n1000 -f jobstate.log* | sed '/merge_whole-wf EXECUTE/ q'
current_tasks=$(wc -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/merge_whole-wf.in.rescue | awk {'print $1'})
touch ${IOPP_JOB_PFS_SCRATCH}/run_dir/temp.core
original_core_files=$(ls -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/*.core | grep -v ^1 | wc -l)
date_echo "Found ${original_core_files} core files"
core_files="${original_core_files}"
previous_ct="0"
while [ "${current_tasks}" != "${num_tasks}" ] && [ "$core_files" == "${original_core_files}" ]; do
    if [[ "${current_tasks}" != "${previous_ct}" ]]; then
        date_echo "Completed $current_tasks of $num_tasks"
    fi
    previous_ct=$current_tasks
    sleep 10
    current_tasks=$(wc -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/merge_whole-wf.in.rescue | awk {'print $1'})
    core_files=$(ls -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/*.core | grep -v ^1 | wc -l)
done

if [[ "${core_files}" != "${original_core_files}" ]]; then
    condor_rm -all
    date_echo "Task encountered Error"
    exit 0
fi

date_echo "Completed $current_tasks of $num_tasks"

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Wait for Compression of DFTracer to finish"
    num_pfw=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep pfw | wc -l)
    num_gz=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep gz | wc -l)
    previous_ct=""
    while [ "${num_gz}" != "${num_pfw}" ]; do
        
        if [[ "${num_gz}" != "${previous_ct}" ]]; then
            date_echo "Completed $num_gz of $num_pfw"
        fi
        previous_ct=$num_gz
        sleep 30
        num_gz=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep gz | wc -l)
        
    done
fi

date_echo "Wait for Merge Workflow to finish"
tail -n0 -f jobstate.log* | sed '/merge_whole-wf POST_SCRIPT_SUCCESS\|merge_whole-wf POST_SCRIPT_FAILURE/ q'

#unset RECORDER_NO_MPI
pegasus-status $PWD
date_echo "Run worklow - End"

rm -rf ${IOPP_JOB_SPACE}

popd
popd
