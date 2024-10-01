
rm -rf /p/lustre3/haridev/montage-dss-6deg/scratch/run_dir/*
condor_submit /p/lustre3/haridev/montage-dss-6deg/job/run_dir/00/00/stage_in_local_local_0_0.sub 
condor_submit /p/lustre3/haridev/montage-dss-6deg/job/run_dir/00/00/stage_in_remote_local_0_0.sub

pushd /p/lustre3/haridev/montage-dss-6deg/scratch/run_dir/
cp -r /usr/workspace/haridev/iopp/software/pegasus-5.1.0dev /p/lustre3/haridev/montage-dss-6deg/scratch/run_dir/
cp /p/lustre3/haridev/montage-dss-6deg//job/run_dir/00/00/merge_whole-wf.in .
export PATH=/usr/WS2/haridev/iopp/software/condor/bin:/usr/WS2/haridev/iopp/software/condor/sbin:/usr/workspace/haridev/iopp/software/condor/bin:/usr/workspace/haridev/iopp/software/Montage/bin:/usr/workspace/haridev/iopp/software/pegasus-5.1.0dev/bin:/usr/WS2/haridev/iopp/venvs/montage_pegasus/.spack-env/view/bin:/usr/tce/packages/python/python-3.9.12/bin:/usr/tce/packages/mvapich2/mvapich2-2.3.7-gcc-12.1.1/bin:/usr/tce/packages/gcc/gcc-12.1.1/bin:/usr/WS2/haridev/spack-09-26-24/bin:/usr/workspace/iopp/install_scripts/bin:/g/g92/haridev/install_scripts/bin:/g/g92/haridev/.vscode-server/cli/servers/Stable-38c31bc77e0dd6ae88a4e9cc93428cc27a56ba40/server/bin/remote-cli:/g/g92/haridev/.cargo/bin:/usr/tce/packages/texlive/texlive-20220321/bin/x86_64-linux:/usr/tce/packages/texlive/texlive-20220321/bin:/usr/global/tools/flux_wrappers/bin:/usr/tce/bin:/usr/lib64/ccache:/usr/local/bin:/usr/bin:/usr/local/sbin:/usr/sbin:.
IOPP_DATE=$(date '+%Y%m%d')
CM1_DFTRACER_LOG_DIR=${IOPP_PROJECT_HOME}/apps/montage_pegasus/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}_${IOPP_DATE}
mkdir -p ${CM1_DFTRACER_LOG_DIR}
IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
export DFTRACER_ENABLE=1
export DFTRACER_INIT=PRELOAD
export DFTRACER_LOG_FILE=${CM1_DFTRACER_LOG_DIR}/montage
export DFTRACER_DATA_DIR=all
export DFTRACER_INC_METADATA=1
rm -rf ${CM1_DFTRACER_LOG_DIR}
mkdir -p ${CM1_DFTRACER_LOG_DIR}

flux run  -N 16 --tasks-per-node 48  --env LD_PRELOAD=/usr/workspace/haridev/iopp/venvs/scr_dlio_env/lib/python3.9/site-packages/dftracer/lib64/libdftracer_preload.so /usr/workspace/haridev/iopp/software/pegasus-5.1.0dev/bin/pegasus-mpi-cluster -v merge_whole-wf.in > /usr/workspace/haridev/iopp/apps/montage_pegasus/out.log 2>&1

flux run  -N 1 --tasks-per-node 48  --env LD_PRELOAD=/usr/workspace/haridev/iopp/venvs/scr_dlio_env/lib/python3.9/site-packages/dftracer/lib64/libdftracer_preload.so /usr/workspace/haridev/iopp/software/pegasus-5.1.0dev/bin/pegasus-mpi-cluster -v merge_whole-wf.in > out.log 2>&1