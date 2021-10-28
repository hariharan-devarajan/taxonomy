#!/bin/bash
### LSF syntax
#BSUB -nnodes 128           #number of nodes
#BSUB -W 06:00              #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J convertor          #name of job
#BSUB -q pbatch             #queue to use


mpirun -n $((128*40)) ~/clion_project/Recorder/build/bin/recorder2parquet-workflow /p/gpfs1/iopp/recorder_app_logs/montage_pegasus/nodes-1
echo "Conversion complete"
