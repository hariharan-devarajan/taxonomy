#!/bin/bash

#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 32
#BSUB -W 02:00

# prepare all storage mount points
total_num_nodes=32
start_nodes=1
gpfs_dir=/p/gpfs1/iopp/temp/montage
mkdir -p $gpfs_dir
rm -rf $gpfs_dir/*
out_fits=$gpfs_dir/out
mkdir -p $out_fits
tmpfs_dir=/dev/shm/montage
lrun -N$total_num_nodes -T1 mkdir -p $tmpfs_dir
lrun -N$total_num_nodes -T1 rm -rf $tmpfs_dir/*
# bbdir=$BBPATH/montage
# lrun -N$total_num_nodes -T1 mkdir -p $bbdir
# lrun -N$total_num_nodes -T1 rm -rf $bbdir/*

# montage related variables
montage_bin_dir=/usr/workspace/iopp/applications/Montage/install/bin

montage_full_data_dir=/p/gpfs1/iopp/montage_data/archive_medium
max_fits_files=$((16*total_num_nodes))
files_per_host=$((max_fits_files/total_num_nodes))
min_fits_index=1
max_fits_index=$files_per_host

mode=baseline
mount_point=$gpfs_dir

export RECORDER_TRACES_DIR=/p/gpfs1/iopp/recorder_logs/montage_${mode}_${LSB_JOBID}_${total_num_nodes}

unset RECORDER_NO_MPI
recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
tracer_lib_path=$recorder_lib_path

output_file_name=${mode}_${LSB_JOBID}_${total_num_nodes}_${max_fits_files}.out

host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    jsrun --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e mkdir $mount_point/$host &
    echo "Created: $mount_point/$host"
    host=$((host+1))
done
jswait all

host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    count_in=1
    for entry in "$montage_full_data_dir"/*.fits; do
        if [ $count_in -gt $max_fits_files ]; then
            break
        fi
        if [ $count_in -ge $min_fits_index -a $count_in -le $max_fits_index ]; then
            jsrun --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e cp $entry $mount_point/$host &
        fi
        count_in=$((count_in+1))
    done
    min_fits_index=$((min_fits_index+files_per_host))
    max_fits_index=$((max_fits_index+files_per_host))
    host=$((host+1))
done
jswait all

montage_run_dir=$mount_point/run
lrun -N$total_num_nodes -T1 mkdir -p $montage_run_dir

host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    jsrun --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e mkdir $montage_run_dir/$host &
    echo "Created: $montage_run_dir/$host"
    host=$((host+1))
done
jswait all

echo "1/7 Create directories to hold processed images"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    jsrun --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e mkdir $montage_run_dir/$host/Kprojdir $montage_run_dir/$host/diffdir $montage_run_dir/$host/corrdir &
    host=$((host+1))
done
jswait all

echo "2/7 Create a metadata table of the input images, Kimages.tbl"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mImgtbl $mount_point/$host $montage_run_dir/$host/Kimages.tbl &
    host=$((host+1))
done
jswait all

echo "3/7 Create a FITS header describing the footprint of the mosaic"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mMakeHdr $montage_run_dir/$host/Kimages.tbl $montage_run_dir/$host/Ktemplate.hdr &
    host=$((host+1))
done
jswait all

echo "4/7 Reproject the input images"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mProjExec -p $mount_point/$host $montage_run_dir/$host/Kimages.tbl $montage_run_dir/$host/Ktemplate.hdr $montage_run_dir/$host/Kprojdir $montage_run_dir/$host/Kstats.tbl &
    host=$((host+1))
done
jswait all

echo "5/7 Create a metadata table of the reprojected images"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mImgtbl $montage_run_dir/$host/Kprojdir/ $montage_run_dir/$host/images.tbl &
    host=$((host+1))
done
jswait all

echo "6/7 Coadd the images to create a mosaic without background corrections"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mAdd -p $montage_run_dir/$host/Kprojdir/ $montage_run_dir/$host/images.tbl $montage_run_dir/$host/Ktemplate.hdr $montage_run_dir/$host/ngc3372_${host}.fits &
    host=$((host+1))
done
jswait all

echo "7/7 Make a PNG of the mosaic for visualization"
host=$start_nodes
while [ $host -le $total_num_nodes ]; do
    RECORDER_NO_MPI=1 jsrun -E LD_PRELOAD=$tracer_lib_path --nrs 1 -c 40 -i --stdio_stdout $output_file_name --stdio_stderr file.e $montage_bin_dir/mViewer -ct 1 -gray $montage_run_dir/$host/ngc3372_${host}.fits -1s max gaussian-log -out $montage_run_dir/$host/ngc3372_${host}.png &
    host=$((host+1))
done

jswait all

echo "Workflow Completed"
