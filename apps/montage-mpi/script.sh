#!/bin/bash

SCRIPT_DIR=$1

pushd ${SCRIPT_DIR}
echo "Sourcing setup"
source ../../setup.sh

IOPP_JOB_ID=${!IOPP_JOB_ENV_ID}

date_echo "Loading environment - Start"
source $IOPP_ENV_SPACK_ROOT/share/spack/setup-env.sh
spack env activate -p $IOPP_ENV_VENVS/montage_pegasus

spack load montage@6.1

date_echo "Create worklow directory - Start"
IOPP_JOB_SPACE=${IOPP_JOB_PFS}/${IOPP_NAME}/${IOPP_JOB_ID}
IOPP_JOB_PFS_RUN_DIR=${IOPP_JOB_SPACE}/rundir
IOPP_JOB_PFS_DATA=${IOPP_JOB_SPACE}/data
MONTAGE_DATA=/p/lustre3/iopp/2mass_7degree

rm -r ${IOPP_JOB_PFS_RUN_DIR}
mkdir -p ${IOPP_JOB_PFS_RUN_DIR} ${IOPP_JOB_PFS_DATA}

data_files=$(find ${IOPP_JOB_PFS_DATA} -type f | wc -l)
if [[ "${data_files}" == "0" ]]; then
    date_echo "No input found. Copying input file from ${MONTAGE_DATA} into ${IOPP_JOB_PFS_DATA}"
    cp -r ${MONTAGE_DATA}/* ${IOPP_JOB_PFS_DATA}/
    date_echo "Input with ${data_files} files found for ${IOPP_NAME} at ${IOPP_JOB_PFS_DATA}"
else
    date_echo "Input with ${data_files} files found for ${IOPP_NAME} at ${IOPP_JOB_PFS_DATA}"
fi

IOPP_PRELOAD=""
MPI_IOPP_PRELOAD=""
if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Setting profiling variables for DFTracer"
    export IOPP_PROFILER_DIR=${IOPP_PROJECT_HOME}/apps/montage-mpi/dftracer/${IOPP_NAME}_${IOPP_JOB_NODES}_${IOPP_JOB_PPN}
    rm -rf ${IOPP_PROFILER_DIR}
    mkdir -p ${IOPP_PROFILER_DIR}
    export DFTRACER_ENABLE=1
    export DFTRACER_INC_METADATA=1
    export DFTRACER_LOG_FILE=${IOPP_PROFILER_DIR}/montage_mpi
    IOPP_PRELOAD="LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    MPI_IOPP_PRELOAD="--env LD_PRELOAD=$IOPP_PROFILER_PRELOAD"
    export DFTRACER_INIT=PRELOAD
    export DFTRACER_DATA_DIR=all
fi

pushd ${IOPP_JOB_PFS_RUN_DIR}

################################################################################

mkdir -p M16_projdir M16_diffdir M16_corrdir
date_echo "Step: 1/11 :Create a metadata table of the input images, Kimages.tbl"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mImgtbl ${IOPP_JOB_PFS_DATA} m16.tbl"
date_echo "Running $cmd"
$cmd

date_echo "Step: 2/11 :Create a FITS header describing the footprint of the mosaic"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mMakeHdr m16.tbl m16.hdr"
date_echo "Running $cmd"
$cmd



date_echo "Step: 3/11 :Reproject the input images"
cmd="flux run -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} --cores $((IOPP_JOB_NODES * IOPP_JOB_CORES)) ${MPI_IOPP_PRELOAD} mProjExecMPI -p ${IOPP_JOB_PFS_DATA} m16.tbl m16.hdr M16_projdir m16_stats.tbl"
date_echo "Running $cmd"
$cmd


date_echo "Step: 4/11 :Create a metadata table of the reprojected images"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mImgtbl M16_projdir m16_proj.tbl"
date_echo "Running $cmd"
$cmd

date_echo "Step: 5/11 :Analyze the overlaps between images"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mOverlaps m16_proj.tbl m16_diffs.tbl"
date_echo "Running $cmd"
$cmd


date_echo "Step: 6/11 :Analyze the Diff between images"
cmd="flux run -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} --cores $((IOPP_JOB_NODES * IOPP_JOB_CORES)) ${MPI_IOPP_PRELOAD} mDiffExecMPI -p M16_projdir m16_diffs.tbl m16.hdr M16_diffdir"
date_echo "Running $cmd"
$cmd

date_echo "Step: 7/11 :Analyze the Fit between images"
cmd="flux run -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} --cores $((IOPP_JOB_NODES * IOPP_JOB_CORES)) ${MPI_IOPP_PRELOAD} mFitExecMPI m16_diffs.tbl m16_fits.tbl M16_diffdir"
date_echo "Running $cmd"
$cmd


date_echo "Step: 8/11 :Perform background modeling and compute corrections for each image"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mBgModel m16_proj.tbl m16_fits.tbl m16_corrections.tbl"
date_echo "Running $cmd"
$cmd


date_echo "Step: 9/11 :Apply corrections to each image"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mBgExec -p M16_projdir/ m16_proj.tbl m16_corrections.tbl M16_corrdir"
date_echo "Running $cmd"
$cmd

date_echo "Step: 10/11 :Coadd the images to create a mosaic with background corrections"
cmd="flux run -N $IOPP_JOB_NODES --tasks-per-node ${IOPP_JOB_PPN} --cores $((IOPP_JOB_NODES * IOPP_JOB_CORES)) ${MPI_IOPP_PRELOAD} mAddMPI -p M16_corrdir/ m16_proj.tbl m16.hdr m16.fits"
date_echo "Running $cmd"
$cmd

date_echo "Step: 11/11 :Make a PNG of the corrected mosaic for visualization"
cmd="flux run -N1 -n1 ${MPI_IOPP_PRELOAD} mViewer -ct 1 -gray ./m16.fits -1s max gaussian-log -out ./m16.png"
date_echo "Running $cmd"
$cmd

if [[ "$IOPP_PROFILER_ENABLE" == "1" ]]; then
    date_echo "Compressing DFTracer Log files in $DLIO_LOG_DIR"
    pushd $IOPP_PROFILER_DIR
        gzip *.pfw
    popd
fi

echo "Finished Executing the workload."

