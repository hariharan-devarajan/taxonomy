#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

pushd ${SCRIPT_DIR}

echo "Sourcing setup"
source ../../setup.sh

IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}
PEGASUS_HOME_INSTALL=${IOPP_PROJECT_HOME}/software/pegasus-5.1.0dev
echo "Loading environment - Start"
source $IOPP_ENV_SPACK_ROOT/share/spack/setup-env.sh
spack env activate -p $IOPP_ENV_VENVS/montage_pegasus

spack load montage@6.1 pegasus@5.1-dev condor@10
source ${IOPP_PROJECT_HOME}/software/condor/condor.sh

condor_master


sleep 10

echo "Loading environment - Done"


echo "Create worklow directory - Start"
IOPP_JOB_SPACE=${IOPP_JOB_PFS}/${IOPP_NAME}/${IOPP_JOB_ID}
IOPP_JOB_PFS_SCRATCH=${IOPP_JOB_SPACE}/scratch
IOPP_JOB_PFS_RUN_DIR=${IOPP_JOB_SPACE}/job
export PYTHONPATH=`pegasus-config --python`:$PYTHONPATH

rm -r ${IOPP_JOB_SPACE}
mkdir -p ${IOPP_JOB_PFS_SCRATCH} ${IOPP_JOB_PFS_RUN_DIR}
cp ${SCRIPT_DIR}/sites.yml.corona ${IOPP_JOB_PFS_RUN_DIR}/sites.yml
sed -i "s|IOPP_JOB_SPACE|$IOPP_JOB_SPACE|" ${IOPP_JOB_PFS_RUN_DIR}/sites.yml
sed -i  "s|PEGASUS_HOME_INSTALL|$PEGASUS_HOME_INSTALL|" ${IOPP_JOB_PFS_RUN_DIR}/sites.yml
cp ${SCRIPT_DIR}/transformations.yml.corona ${IOPP_JOB_PFS_RUN_DIR}/transformations.yml
sed -i "s|IOPP_SCRIPT_DIR|$SCRIPT_DIR|" ${IOPP_JOB_PFS_RUN_DIR}/transformations.yml
cp $SCRIPT_DIR/pegasus.properties.corona ${IOPP_JOB_PFS_RUN_DIR}/pegasus.properties


pushd ${IOPP_JOB_PFS_RUN_DIR}

echo "Create worklow directory - End"
echo "Create worklow data - Start"
rm -rf ${IOPP_JOB_PFS_RUN_DIR}/data

if [[ "$IOPP_NAME" == "montage-2mass-2deg" ]]; then
    ${IOPP_PROJECT_HOME}/software/montage-workflow-v3/montage-workflow.py --center "15.09552 -0.74559" --degrees 2.0 --band 2mass:j:red --band 2mass:h:green --band 2mass:k:blue
elif [[ "$IOPP_NAME" == "montage-dss-2deg" ]]; then
    ${IOPP_PROJECT_HOME}/software/montage-workflow-v3/montage-workflow.py --center "56.7 24.00" --degrees 2.0 --band dss:DSS2B:blue --band dss:DSS2R:green --band dss:DSS2IR:red
elif [[ "$IOPP_NAME" == "montage-dss-6deg" ]]; then
    ${IOPP_PROJECT_HOME}/software/montage-workflow-v3/montage-workflow.py --center "15.09552 -0.74559" --degrees 7.0 --band 2mass:j:red --band 2mass:h:green --band 2mass:k:blue
fi
du -sh data 
sleep 10
echo "Create worklow data - End"
echo "Plan worklow - Start"
pegasus-plan --dir work --dax data/montage-workflow.yml --output-site local --sites condorpool  --cluster whole --relative-dir run_dir

pushd work/run_dir

sleep 30
echo "Plan worklow - End"
echo "Run worklow - Start"
touch jobstate.log

pegasus-run $PWD

num_tasks=$(cat 00/00/merge_whole-wf.in | grep TASK | wc -l)
echo "Total Tasks ${num_tasks}"

touch ${IOPP_JOB_PFS_SCRATCH}/run_dir/merge_whole-wf.in.rescue
tail -n0 -f jobstate.log* | sed '/merge_whole-wf EXECUTE/ q'

current_tasks=$(wc -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/merge_whole-wf.in.rescue | awk {'print $1'})
previous_ct=""
while [ "${current_tasks}" != "${num_tasks}" ]; do
    if [[ "${current_tasks}" != "${previous_ct}" ]]; then
        echo "Completed $current_tasks of $num_tasks"
    fi
    current_tasks=$(wc -l ${IOPP_JOB_PFS_SCRATCH}/run_dir/merge_whole-wf.in.rescue | awk {'print $1'})
    previous_ct=$current_tasks
    sleep 30
done

echo "Completed $current_tasks of $num_tasks"
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    echo "Wait for Compression of DFTracer to finish"
    num_pfw=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep pfw | wc -l)
    num_gz=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep gz | wc -l)
    previous_ct=""
    while [ "${num_gz}" != "${num_pfw}" ]; do
        if [[ "${num_gz}" != "${previous_ct}" ]]; then
            echo "Completed $num_gz of $num_pfw"
        fi
        num_gz=$(ls ${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_* | grep gz | wc -l)
        previous_ct=$num_gz
        sleep 30
    done
fi

echo "Wait for Merge Workflow to finish"
tail -n0 -f jobstate.log* | sed '/merge_whole-wf POST_SCRIPT_SUCCESS\|merge_whole-wf POST_SCRIPT_FAILURE/ q'

#unset RECORDER_NO_MPI
pegasus-status $PWD
echo "Run worklow - End"


popd
popd
