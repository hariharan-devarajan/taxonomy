#!/usr/bin/bash
## #FLUX: -N 32                                        #number of nodes
## #FLUX: -n 1536                                      #number of processes
## #FLUX: -t 45m                                      #walltime in minutes
## #FLUX: --setattr=system.bank=asccasc                #account
## #FLUX: -q pbatch                                    #queue to use

source /usr/workspace/iopp/kogiou1/venvs/pegasus-env/bin/activate

export work_dir=/p/lustre2/kogiou1/Montage/
rm -rf $work_dir
mkdir $work_dir
cp -r ./* $work_dir
cd $work_dir

export MONTAGE_INSTALL_PATH=/usr/workspace/kogiou1/Montage
export PATH=${MONTAGE_INSTALL_PATH}/bin:$PATH
export LD_LIBRARY_PATH=${MONTAGE_INSTALL_PATH}/lib:$LD_LIBRARY_PATH

export DFTRACER_INSTALLED=/usr/workspace/iopp/kogiou1/venvs/pegasus-env/lib/python3.9/site-packages/dftracer
export LD_LIBRARY_PATH=$DFTRACER_INSTALLED/lib:$DFTRACER_INSTALLED/lib64:$LD_LIBRARY_PATH
echo "LD LIBRARY PATH:"
echo $LD_LIBRARY_PATH

export DFTRACER_LOG_FILE=/usr/workspace/iopp/dlp_traces/v1.0.4/montage_mpi_2_2mass_32_nodes/montage
#export DFTRACER_DATA_DIR=$work_dir
export DFTRACER_DATA_DIR=all
export DFTRACER_ENABLE=1
export DFTRACER_INC_METADATA=1
export DFTRACER_INIT=PRELOAD
export DFTRACER_BIND_SIGNALS=0
export DFTRACER_LOG_LEVEL=INFO
export DFTRACER_TRACE_COMPRESSION=1
dftracer=$DFTRACER_INSTALLED/lib64/libdftracer_preload.so

export LD_PRELOAD=$dftracer

export nnodes=32
export nprocs=1536

rm -f *.fits *.hdr *.tbl *.png 
rm -rf M16_*dir

data_dir=/p/lustre2/kogiou1/2mass

################################################################################
print_duration() {
  end_time=$(date +%s)
  duration=$((end_time - start_time))
  echo "Duration: $duration seconds"
  start_time=$end_time
}

start_time=$(date +%s)
################################################################################

mkdir M16_projdir M16_diffdir M16_corrdir
echo "Create a metadata table of the input images, Kimages.tbl"
flux run -N1 -n1 mImgtbl ${data_dir} m16.tbl
# mImgtbl ${data_dir} m16.tbl
print_duration

sleep 1

echo "Create a FITS header describing the footprint of the mosaic"
flux run -N1 -n1 mMakeHdr m16.tbl m16.hdr
# mMakeHdr m16.tbl m16.hdr
print_duration

sleep 1

echo "Reproject the input images"
flux run -N $nnodes -n $nprocs mProjExecMPI -p ${data_dir} m16.tbl m16.hdr M16_projdir m16_stats.tbl
#srun -N $nnodes -n $nprocs -env LD_PRELOAD $librecorder mProjExecMPI -p M16_6x6 m16.tbl m16.hdr M16_projdir m16_stats.tbl
print_duration

sleep 1

echo "Create a metadata table of the reprojected images"
flux run -N1 -n1 mImgtbl M16_projdir m16_proj.tbl
# mImgtbl M16_projdir m16_proj.tbl
print_duration

sleep 1

echo "Analyze the overlaps between images"
flux run -N1 -n1 mOverlaps m16_proj.tbl m16_diffs.tbl
# mOverlaps m16_proj.tbl m16_diffs.tbl
print_duration
flux run -N $nnodes -n $nprocs mDiffExecMPI -p M16_projdir m16_diffs.tbl m16.hdr M16_diffdir
print_duration

sleep 1

flux run -N $nnodes -n $nprocs mFitExecMPI m16_diffs.tbl m16_fits.tbl M16_diffdir
print_duration

sleep 1

echo "Perform background modeling and compute corrections for each image"
flux run -N1 -n1 mBgModel m16_proj.tbl m16_fits.tbl m16_corrections.tbl
# mBgModel m16_proj.tbl m16_fits.tbl m16_corrections.tbl
print_duration

sleep 1

echo "Apply corrections to each image"
# This is a time-comsuming step and is not parallelized
flux run -N1 -n1 mBgExec -p M16_projdir/ m16_proj.tbl m16_corrections.tbl M16_corrdir
# mBgExec -p M16_projdir/ m16_proj.tbl m16_corrections.tbl M16_corrdir
print_duration

sleep 1

echo "Coadd the images to create a mosaic with background corrections"
flux run -N $nnodes -n $nprocs mAddMPI -p M16_corrdir/ m16_proj.tbl m16.hdr m16.fits
print_duration

sleep 1

echo "Make a PNG of the corrected mosaic for visualization"
flux run -N1 -n1 mViewer -ct 1 -gray ./m16.fits -1s max gaussian-log -out ./m16.png
# mViewer -ct 1 -gray ./m16.fits -1s max gaussian-log -out ./m16.png
print_duration


