#!/bin/bash
### LSF syntax
#BSUB -nnodes 1            #number of nodes
#SUB -W 06:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J mummi             #name of job
#BSUB -q pbatch            #queue to use

MAIN_DIR=$PWD
mkdir -p $LSB_JOBID 
cd $LSB_JOBID
CURR_DIR=$PWD
cd $MAIN_DIR
ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI
pfs=/p/gpfs1/iopp
IFS=$'\r\n' GLOBIGNORE='*' command eval 'PATCHES=($(cat $MAIN_DIR/simlist))'

source $MAIN_DIR/load_ddcmd_mummi.sh
parent_outpath=$pfs/temp/$LSB_JOBID
rm -r $parent_outpath 
rm -r /var/tmp/$USER/cg

count=0
for simname in "${PATCHES[@]}"
do
  echo "--- Preparing $simname ---"
  srcpath=$iopp/applications/mummi/sims-cg/$simname
  outpath=$pfs/temp/$LSB_JOBID/sims-cg/$simname
  mkdir -p $outpath
  cp -r $srcpath/* $outpath/
  locpath=/var/tmp/$USER/cg/${simname}_$LSB_JOBID
  echo $outpath " " $locpath
  mkdir -p $locpath; 
  cd $locpath

  cp $outpath/ConsAtom.data                         $locpath/
  cp $outpath/martini.data                          $locpath/
  cp $outpath/molecule.data                         $locpath/
  cp $outpath/object.data                           $locpath/
  cp $outpath/restraint.data                        $locpath/
  cp $outpath/topol.tpr                             $locpath/
  cp $outpath/lipids-water-eq4.gro                  $locpath/
  cp $outpath/POPX_Martini_v2.0_lipid.itp           $locpath/
  cp $outpath/resItpList                            $locpath/
  cp -P $outpath/restart                            $locpath/
  cp -r $(dirname `readlink -f $outpath/restart`)   $locpath/
  count=$((count +1))
done

sleep 1m

count=0
for simname in "${PATCHES[@]}"
do
  echo "--- Starting $simname ---"
  outpath=$pfs/temp/$LSB_JOBID/sims-cg/$simname
  locpath=/var/tmp/$USER/cg/${simname}_$LSB_JOBID
  cd $locpath
  rs=`readlink -f $locpath/restart`
  sname=`basename $(dirname $rs)`
  snum=$(echo "${sname//[!0-9]/}")
  [[ ! -z "$snum" ]] && cframe=`expr $snum + 25000` || cframe=25000

  cd $outpath
  # 4 tasks on 4 resources on 1 CPU and 4 GPUs per node
  jsrun -n 1 -a 1 -c 1 -g 1 -r 1 cganalysis  --simname $simname  --pathremote $outpath  --path $locpath  --fstype mummi  --maxsimtime $((500000 * 1))  --frameProcessBatchSize 5  --simbin ddcMD_GPU  --siminputs $outpath  -c  -d 2  --fcount $cframe  --nprocs 3  > $locpath/cg_analysis.log 2>&1 &
  # --fbio mummi
  echo "executed $simname"
  count=$((count +1))
done
echo "Waiting..."
wait
echo "All simulations done"
