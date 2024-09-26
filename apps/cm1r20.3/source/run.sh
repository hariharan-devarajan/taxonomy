#!/bin/bash
export run_dir=/p/gpfs1/chowdhur/io_playground/cm1r20.3.$LSB_JOBID

mkdir -p $run_dir

# #BSUB -cwd /p/gpfs1/chowdhur/io_playground/cm1r20.3.$LSB_JOBID 

#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 1
#BSUB -W 10

min_nodes=1
max_nodes=1
tasks_per_node=1

min_iteration=1
max_iteration=1

cm1_executable_path=/usr/workspace/iopp/applications/cm1r20.3/install/bin

date=$(date '+%Y%m%d')
export RECORDER_TRACES_DIR=/p/gpfs1/haridev/iopp/recorder_logs/recorder-$date/cm1_$USER_$LSB_JOBID

recorder_lib_path=/usr/workspace/iopp/software/Recorder/install/lib/librecorder.so
tracer_lib_path=$recorder_lib_path

cp -r $cm1_executable_path/* $run_dir

pushd $run_dir

num_nodes=$min_nodes
while [ $num_nodes -le $max_nodes ]
do
    printf "\nNum Clients: "
    echo $num_nodes
    printf "\n"
    iteration=$min_iteration
    while [ $iteration -le $max_iteration ]
    do
        printf "\nIteration: "
        echo $PWD
        echo $iteration
        printf "\n"
        lrun -N$num_nodes -T$tasks_per_node --env "LD_PRELOAD=$tracer_lib_path" ./cm1.exe
        iteration=$((iteration+1))
    done
    num_nodes=$((num_nodes*2))
done
popd

