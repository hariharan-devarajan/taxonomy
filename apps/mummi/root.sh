#!/bin/bash
### LSF syntax
#BSUB -nnodes 1            #number of nodes
#BSUB -W 00:10             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J mummi             #name of job
#BSUB -q pbatch            #queue to use

INTRE='^[0-9]+$'

HARNESS=`realpath $1`
SIMLIST=`realpath $4`
SCRIPT=`realpath $2`
NPROCS=$3

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
/opt/ibm/spectrum_mpi/jsm_pmix/bin/jsrun -r4 -a1 -g1 -c1 $HARNESS $SCRIPT $NPROCS $SIMLIST
