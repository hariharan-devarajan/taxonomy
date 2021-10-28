#!/bin/bash

if [ -z "${OMPI_COMM_WORLD_SIZE}" ]
then
    echo "NOT USING MPI"
    WORLD_RANK=0
    WORLD_SIZE=1
else
    WORLD_RANK=$OMPI_COMM_WORLD_RANK
    WORLD_SIZE=$OMPI_COMM_WORLD_SIZE
fi

hostname=`hostname`
echo "Running ${WORLD_RANK} of ${WORLD_SIZE} on ${hostname}"

host=$((WORLD_RANK+1))
gpfs_dir=/p/gpfs1/iopp/temp/montage/$LSB_JOBID/$host
rm -rf $gpfs_dir
mkdir -p $gpfs_dir
out_fits=$gpfs_dir/out
mkdir -p $out_fits


montage_bin_dir=/usr/workspace/iopp/applications/Montage/install/bin

montage_full_data_dir=/p/gpfs1/iopp/montage_data/archive_medium
max_fits_files=$((16*WORLD_SIZE))
files_per_host=$((max_fits_files/WORLD_SIZE))
min_fits_index=1
max_fits_index=$files_per_host

mode=baseline
mount_point=$gpfs_dir

export RECORDER_TRACES_DIR=/p/gpfs1/iopp/recorder_logs/montage_${mode}_${LSB_JOBID}_${total_num_nodes}

unset RECORDER_NO_MPI
recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
tracer_lib_path=$recorder_lib_path

output_dir=$PWD/${LSB_JOBID}
mkdir -p $output_dir
output_file_name=$output_dir/${host}.out
error_file_name=$output_dir/${host}.err

echo "" 2> $error_file_name 1> $output_file_name

mkdir $mount_point 2>> $error_file_name 1>> $output_file_name
echo "Created: $mount_point"

min_fits_index=$((min_fits_index+files_per_host*WORLD_RANK))
max_fits_index=$((max_fits_index+files_per_host*WORLD_RANK))
count_in=1
for entry in "$montage_full_data_dir"/*.fits; do
    if [ $count_in -gt $max_fits_files ]; then
        break
    fi
    if [ $count_in -ge $min_fits_index -a $count_in -le $max_fits_index ]; then
        cp $entry $mount_point 2>> $error_file_name 1>> $output_file_name
    fi
    count_in=$((count_in+1))
done



montage_run_dir=$mount_point/run
mkdir -p $montage_run_dir 2>> $error_file_name 1>> $output_file_name
echo "Created: $montage_run_dir"

echo "1/7 Create directories to hold processed images"
mkdir $montage_run_dir/Kprojdir $montage_run_dir/diffdir $montage_run_dir/corrdir 2>> $error_file_name 1>> $output_file_name 

#sync 
echo "2/7 Create a metadata table of the input images, $montage_run_dir/Kimages.tbl"
RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
$montage_bin_dir/mImgtbl $mount_point $montage_run_dir/Kimages.tbl 2>> $error_file_name 1>> $output_file_name  

#sync 
echo "3/7 Create a FITS header describing the footprint of the mosaic $montage_run_dir/Ktemplate.hdr"
RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
$montage_bin_dir/mMakeHdr $montage_run_dir/Kimages.tbl $montage_run_dir/Ktemplate.hdr 2>> $error_file_name 1>> $output_file_name

#sync 
echo "4/7 Reproject the input images $montage_run_dir/Kprojdir"
#jsrun -p 39 -E LD_PRELOAD=$tracer_lib_path \
RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
$montage_bin_dir/mProjExec -p $mount_point $montage_run_dir/Kimages.tbl $montage_run_dir/Ktemplate.hdr $montage_run_dir/Kprojdir $montage_run_dir/Kstats.tbl 2> $error_file_name 1> $output_file_name

#sync 
echo "5/7 Create a metadata table of the reprojected images $montage_run_dir/images.tbl"
RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
$montage_bin_dir/mImgtbl $montage_run_dir/Kprojdir/ $montage_run_dir/images.tbl 2>> $error_file_name 1>> $output_file_name

#sync 
echo "6/7 Coadd the images to create a mosaic without background corrections $montage_run_dir/ngc3372.fits"
unset RECORDER_NO_MPI
#RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
jsrun -p 39 -E LD_PRELOAD=$tracer_lib_path \
$montage_bin_dir/mAddMPI -p $montage_run_dir/Kprojdir/ $montage_run_dir/images.tbl $montage_run_dir/Ktemplate.hdr $montage_run_dir/ngc3372.fits 2>> $error_file_name 1>> $output_file_name

#sync 

#unset LD_PRELOAD
#unset RECORDER_NO_MPI
echo "7/7 Make a PNG of the mosaic for visualization $montage_run_dir"
RECORDER_NO_MPI=1 LD_PRELOAD=$tracer_lib_path \
gdb --args \
$montage_bin_dir/mViewer -ct 1 -gray $montage_run_dir/ngc3372.fits -1s max gaussian-log -out $montage_run_dir/ngc3372.png 2>> $error_file_name 1>> $output_file_name

#sync 
echo "Finished $host workflow"
