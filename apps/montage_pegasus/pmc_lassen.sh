#!/bin/bash

set -e
#source /usr/workspace/iopp/install_scripts/bin/iopp-init
#source /usr/workspace/iopp/install_scripts/bin/spack-init
unset RECORDER_NO_MPI
unset LD_PRELOAD
#spack env activate montage-pegasus
LAUNCH_DIR=`pwd`
echo "Job Launched in directory $LAUNCH_DIR"
pushd $PEGASUS_SCRATCH_DIR
cp $_CONDOR_SCRATCH_DIR/*.in .
#recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
#export RECORDER_TRACES_DIR=/p/gpfs1/iopp/recorder_logs/montage_peagsus_${LSB_JOBID}
#/usr/tcetmp/bin/jsrun --env LD_PRELOAD=$recorder_lib_path --env RECORDER_WITH_NON_MPI=1 /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@"
dftracer_so=/usr/WS2/iopp/software/spack/opt/spack/linux-rhel7-power9le/gcc-8.3.1/python-3.9.6-rd2wz4o2deeo6ddb2thcwgniciy5chre/lib/python3.9/site-packages/dftracer/lib64/libdftracer_preload.so
log_dir=/p/gpfs1/iopp/dlp/montage_pegasus_${LSB_JOBID}/$(date -d "today" +"%Y%m%d%H%M")
mkdir -p $log_dir 

echo /usr/tcetmp/bin/jsrun --env DFTRACER_LOG_FILE=$log_dir/montage --env LD_PRELOAD=$dftracer_so --env DFTRACER_ENABLE=1 --env DFTRACER_INIT=PRELOAD --env DFTRACER_INC_METADATA=1 --env DFTRACER_DATA_DIR=all /usr/workspace/iopp/software/variorum/install/bin/var_monitor -p /p/gpfs1/iopp/dlp/montage_pegasus_${LSB_JOBID} -u -c -a /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@"
#/usr/tcetmp/bin/jsrun --env DFTRACER_LOG_FILE=$log_dir/montage --env LD_PRELOAD=$dftracer_so --env DFTRACER_ENABLE=1 --env DFTRACER_INIT=PRELOAD --env DFTRACER_INC_METADATA=1 --env DFTRACER_DATA_DIR=all /usr/workspace/iopp/software/variorum/install/bin/var_monitor -p /p/gpfs1/iopp/dlp/montage_pegasus_${LSB_JOBID} -u -c -a /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@"
SLEEP=$((6*3600))
#echo Starting var monitor
#lrun -N ${LLNL_NUM_COMPUTE_NODES} -n ${LLNL_NUM_COMPUTE_NODES} --pack /usr/workspace/iopp/software/variorum/install/bin/var_monitor -u -p ${log_dir} -a "sleep $SLEEP" &
#job=$!
#jsrun --nrs ${LLNL_NUM_COMPUTE_NODES} --rs_per_host=1 --tasks_per_rs=1 -c ALL_CPUS -g ALL_GPUS /usr/workspace/iopp/software/variorum/install/bin/var_monitor -p $log_dir -u -c -a "sleep $((2*3600))" &

# 

lrun -N ${LLNL_NUM_COMPUTE_NODES} -n $((LLNL_NUM_COMPUTE_NODES*40)) --pack \
  --env DFTRACER_LOG_FILE=$log_dir/montage \
  --env LD_PRELOAD=$dftracer_so \
  --env DFTRACER_ENABLE=1 \
  --env DFTRACER_INIT=PRELOAD \
  --env DFTRACER_INC_METADATA=1 \
  --env DFTRACER_DATA_DIR=all \
  /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@" #" || true # > /usr/workspace/iopp/software/iopp/apps/montage_pegasus/montage_pegasus_${LSB_JOBID}.out 2>&1 

#echo Killing var monitor
#lrun -N ${LLNL_NUM_COMPUTE_NODES} -n ${LLNL_NUM_COMPUTE_NODES} --pack /usr/workspace/iopp/software/iopp/apps/montage_pegasus/script.sh
#jsrun --nrs ${LLNL_NUM_COMPUTE_NODES} --rs_per_host=1 --tasks_per_rs=1 -c ALL_CPUS -g ALL_GPUS /usr/workspace/iopp/software/iopp/apps/montage_pegasus/script.sh
