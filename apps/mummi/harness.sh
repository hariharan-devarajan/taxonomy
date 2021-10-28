#!/bin/sh

SCRIPT=`realpath $1`
IFS=$'\r\n' GLOBIGNORE='*' command eval 'PATCHES=($(cat $3))'
MAXPROCESSES=$2
PPWD=`pwd`
mkdir -p ${LSB_JOBID} 
if [ -z "${OMPI_COMM_WORLD_SIZE}" ]
then
    echo "NOT USING MPI"
    WORLD_RANK=0
    WORLD_SIZE=1
else
    WORLD_RANK=$OMPI_COMM_WORLD_RANK
    WORLD_SIZE=$OMPI_COMM_WORLD_SIZE
fi

nrun=0
inum=0
mkdir -p ${LSB_JOBID}
for PATCHDIR in "${PATCHES[@]}"
do
    modulo=$(( $inum % ${WORLD_SIZE} ))
    echo "rank $WORLD_RANK modulo $modulo"
    if [[ "$modulo" = "$WORLD_RANK" ]]
    then
        echo "[`date +%x_%H:%M:%S:%N`] RANK ${WORLD_RANK} WORLD $WORLD_SIZE | nrun ${nrun} | ${PATCHDIR}]" 
        {
            echo "[`date +%x_%H:%M:%S:%N`] PWD for rank $WORLD_RANK >>>>>>>> `pwd`"
            $SCRIPT $PATCHDIR $WORLD_RANK > ${LSB_JOBID}/${LSB_JOBID}_${WORLD_RANK}.log
        } & 
        
        let nrun++
        echo "[`date +%x_%H:%M:%S:%N`] Returning to `pwd` $WORLD_RANK from ${p}"
    fi
    let inum++
    if ((nrun>=MAXPROCESSES)); then
        echo "[`date +%x_%H:%M:%S:%N`] Max Processes Reached: Waiting"
        wait
        nrun=0
    fi
done
