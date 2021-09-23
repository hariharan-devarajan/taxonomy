#!/bin/bash
#BSUB -cwd /g/g92/haridev/project/taxonomy/apps/montage
#BSUB -o /g/g92/haridev/project/taxonomy/apps/montage/out.log
#BSUB -e /g/g92/haridev/project/taxonomy/apps/montage/err.log

#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 4
#BSUB -W 06:00 
#BSUB -J montage_10
num_nodes=4
tasks_per_node=40

montage_bin_dir=/g/g92/haridev/software/Montage-6.0/bin
montage_data_dir=/p/gpfs1/haridev/datasets/montage/m101/rawdir
montage_run_dir=/p/gpfs1/haridev/datasets/montage/m101/10_mosaic
mkdir -p $montage_run_dir

recorder_lib_path=/p/gpfs1/wang116/sources/Recorder/install/lib/librecorder.so
tracer_lib_path=$recorder_lib_path

pushd $montage_run_dir

echo "Create directories to hold processed images"
mkdir Kprojdir diffdir corrdir

echo "Create a metadata table of the input images, Kimages.tbl"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mImgtbl $montage_data_dir Kimages.tbl

mv recorder-logs step-1-recorder-logs

echo "Create a FITS header describing the footprint of the mosaic"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mMakeHdr Kimages.tbl Ktemplate.hdr

mv recorder-logs step-2-recorder-logs

echo "Reproject the input images"
# lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mProjExecMPI -p $montage_data_dir Kimages.tbl Ktemplate.hdr Kprojdir Kstats.tbl
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mProjExec -p $montage_data_dir Kimages.tbl Ktemplate.hdr Kprojdir Kstats.tbl

mv recorder-logs step-3-recorder-logs

echo "Create a metadata table of the reprojected images"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mImgtbl Kprojdir/ images.tbl

mv recorder-logs step-4-recorder-logs

echo "Coadd the images to create a mosaic without background corrections"
lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mAddMPI -p Kprojdir/ images.tbl Ktemplate.hdr m17_uncorrected.fits

mv recorder-logs step-5-recorder-logs

echo "Make a PNG of the mosaic for visualization"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mViewer -ct 1 -gray m17_uncorrected.fits -1s max gaussian-log -out m17_uncorrected.png

mv recorder-logs step-6-recorder-logs

echo "Analyze the overlaps between images"

echo "Find out which images overlap"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mOverlaps images.tbl diffs.tbl
mv recorder-logs step-7-recorder-logs

echo "Subtract each pair of overlapping images and create a set of difference images in the diffdr subdirectory"
# lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mDiffExecMPI -p Kprojdir/ diffs.tbl Ktemplate.hdr diffdir
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mDiffExec -p Kprojdir/ diffs.tbl Ktemplate.hdr diffdir
mv recorder-logs step-8-recorder-logs

echo "Calculate plane-fitting coefficients for each difference image"
# lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mFitExecMPI diffs.tbl fits.tbl diffdir
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mFitExec diffs.tbl fits.tbl diffdir
mv recorder-logs step-9-recorder-logs

echo "Perform background modeling and compute corrections for each image"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mBgModel images.tbl fits.tbl corrections.tbl
mv recorder-logs step-10-recorder-logs

echo "Apply corrections to each image"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mBgExec -p Kprojdir/ images.tbl corrections.tbl corrdir
mv recorder-logs step-11-recorder-logs


echo "Coadd the images to create a mosaic with background corrections"
lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mAddMPI -p corrdir/ images.tbl Ktemplate.hdr m17.fits
mv recorder-logs step-12-recorder-logs


echo "Make a PNG of the corrected mosaic for visualization"
lrun -N1 -T1 --env "LD_PRELOAD=$tracer_lib_path" $montage_bin_dir/mViewer -ct 1 -gray m17.fits -1s max gaussian-log -out m17.png
mv recorder-logs step-13-recorder-logs

mkdir recorder-logs

for i in {1..13}; do
mv step-$i-recorder-logs recorder-logs/step-$i-recorder-logs
done 


echo "Move all the output to a directory"
export timestamp=$(date +%s)
export out_dir=out_${timestamp}
mkdir ../$out_dir
mv * ../$out_dir

popd
