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
echo "/usr/tcetmp/bin/jsrun /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v $@"
#recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
#export RECORDER_TRACES_DIR=/p/gpfs1/iopp/recorder_logs/genome_peagsus_${LSB_JOBID}
#echo "trace in dir $RECORDER_TRACES_DIR"
#/usr/tcetmp/bin/jsrun --env LD_PRELOAD=$recorder_lib_path --env RECORDER_WITH_NON_MPI=1  /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@"
#/usr/tcetmp/bin/jsrun /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -v "$@"

dftracer_so=/usr/WS2/iopp/software/spack/var/spack/environments/genome-pegasus/.spack-env/view/lib/python3.9/site-packages/dftracer/lib64/libdftracer_preload.so

log_dir=/p/gpfs1/iopp/dlp/genome_pegasus_${LSB_JOBID}/$(date -d "today" +"%Y%m%d%H%M")
mkdir -p $log_dir 

SLEEP=$((6*3600))
echo Starting var monitor
lrun -N ${LLNL_NUM_COMPUTE_NODES} -n ${LLNL_NUM_COMPUTE_NODES} --pack /usr/workspace/iopp/software/variorum/install/bin/var_monitor -u -p ${log_dir} -a "sleep $SLEEP" &
job=$!

pmc_log=/p/gpfs1/iopp/temp/1000-genome-haridev/scratch/run_dir/
mkdir -p $pmc_log

lrun -N ${LLNL_NUM_COMPUTE_NODES} -n $((LLNL_NUM_COMPUTE_NODES*39)) --pack \
  --env LD_PRELOAD=$dftracer_so \
  --env DFTRACER_LOG_FILE=$log_dir/genome \
  --env DFTRACER_ENABLE=1 \
  --env DFTRACER_INIT=PRELOAD \
  --env DFTRACER_INC_METADATA=1 \
  --env DFTRACER_DATA_DIR=all \
  --env DFTRACER_BIND_SIGNALS=1 \
  /usr/WS2/iopp/software/pegasus/install/bin/pegasus-mpi-cluster -s -t 1 -o $pmc_log/pmc.out -e $pmc_log/pmc.err  -v "$@" #" || true # > /usr/workspace/iopp/software/iopp/apps/montage_pegasus/montage_pegasus_${LSB_JOBID}.out 2>&1 

echo Killing var monitor
lrun -N ${LLNL_NUM_COMPUTE_NODES} -n ${LLNL_NUM_COMPUTE_NODES} --pack /usr/workspace/iopp/software/iopp/apps/montage_pegasus/script.sh
#jsrun --nrs ${LLNL_NUM_COMPUTE_NODES} --rs_per_host=1 --tasks_per_rs=1 -c ALL_CPUS -g ALL_GPUS /usr/workspace/iopp/software/iopp/apps/montage_pegasus/script.sh
