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

PROC_WORLD_SIZE=$((WORLD_SIZE * MAXPROCESSES))
nrun=0
inum=0
for PATCHDIR in "${PATCHES[@]}"
do
    my_rank=$((WORLD_RANK*MAXPROCESSES + inum))
    modulo=$(( $my_rank % ${PROC_WORLD_SIZE} ))
    echo "rank $my_rank modulo $modulo"
    if [[ "$modulo" = "$my_rank" ]]
    then
        echo "[`date +%x_%H:%M:%S:%N`] RANK ${my_rank} WORLD $PROC_WORLD_SIZE | nrun ${nrun} | ${PATCHDIR}]" 
        {
            echo "[`date +%x_%H:%M:%S:%N`] PWD for rank $my_rank >>>>>>>> `pwd`"
            $SCRIPT $PATCHDIR $my_rank > ${LSB_JOBID}/${LSB_JOBID}_${my_rank}.log &
            pids[${nrun}]=$!
            pid=${pids[nrun]}
        } 
        let nrun++
        echo "[`date +%x_%H:%M:%S:%N`] $pid Returning to `pwd` from ${p}"
    fi
    let inum++
    if ((nrun>=MAXPROCESSES)); then
        echo "[`date +%x_%H:%M:%S:%N`] Max Processes Reached: Waiting"
        # wait for all pids
        for pid in ${pids[*]}; do
            echo " waiting $pid"
            wait $pid
            echo "done $pid"
        done
        nrun=0
    fi
done

wait

