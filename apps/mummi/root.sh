#!/bin/bash
### LSF syntax
#BSUB -G asccasc
#BSUB -q pbatch
#BSUB -nnodes 32
#BSUB -W 02:00
#BSUB -J mummi             #name of job

INTRE='^[0-9]+$'
NODES=1
HARNESS=`realpath $1`
SIMLIST=`realpath $4`
SCRIPT=`realpath $2`
NPROCS=$3
unset LD_PRELOAD

if ! [[ $NPROCS =~ $INTRE ]] ; then
   echo "ERROR: number of processes is not a number" >&2; exit 1
fi

if [[ ! -f $SIMLIST ]]; then
    echo "Sim list not found ${SIMLIST}. Exiting."
    exit 1
fi

if [[ ! -f $SCRIPT ]]; then
    echo "Script not found ${SCRIPT}. Exiting."
    exit 1
fi
source $PWD/load_ddcmd_mummi.sh
jsrun -r$NODES -a1 -c1 $HARNESS $SCRIPT $NPROCS $SIMLIST
