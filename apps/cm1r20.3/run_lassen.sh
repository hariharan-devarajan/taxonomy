#!/bin/bash
#BSUB -cwd /usr/workspace/iopp/software/iopp/apps/cm1r20.3 
#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 32
#BSUB -W 15

export run_dir=/p/gpfs1/iopp/temp/cm1r20.3.$LSB_JOBID
# export run_dir=/p/gpfs1/chowdhur/io_playground/cm1r20.3.$LSB_JOBID
mkdir -p $run_dir
min_nodes=32
max_nodes=32
tasks_per_node=40

min_iteration=1
max_iteration=1

cm1_executable_path=/usr/workspace/iopp/applications/cm1r20.3/install/bin
unset RECORDER_NO_MPI
date=$(date '+%Y%m%d')
# export RECORDER_TRACES_DIR=/p/gpfs1/haridev/iopp/recorder_logs/recorder-$date/cm1_$USER_$LSB_JOBID
export RECORDER_TRACES_DIR=/p/gpfs1/haridev/iopp/recorder_logs

recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
tracer_lib_path=$recorder_lib_path

cp -r $cm1_executable_path/* $run_dir

sed -i "s/ nx           =      60,/ nx           =      120,/" $run_dir/namelist.input
sed -i "s/ ny           =      60,/ ny           =      120,/" $run_dir/namelist.input
#sed -i "s/ nz           =      40,/ nz           =      80,/" $run_dir/namelist.input
sed -i "s/ ppnode       =      1,/ ppnode       =      $tasks_per_node,/" $run_dir/namelist.input
cat $run_dir/namelist.input | grep ppnode
pushd $run_dir

num_nodes=$min_nodes
while [ $num_nodes -le $max_nodes ]
do
    echo "Num Clients: $num_nodes"
    iteration=$min_iteration
    while [ $iteration -le $max_iteration ]
    do
        echo "Iteration: $iteration"
        lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" ./cm1.exe > ./cm1_${num_nodes}_${iteration}.log
        # lrun -N$num_nodes -T$tasks_per_node ./cm1.exe > ./cm1_${num_nodes}_${iteration}.log
        iteration=$((iteration+1))
    done
    num_nodes=$((num_nodes*2))
done
popd

