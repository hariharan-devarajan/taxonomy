#!/bin/bash
### LSF syntax
#BSUB -nnodes 1            #number of nodes
#SUB -W 06:00             #walltime in minutes
#BSUB -G asccasc           #account
#BSUB -J mummi             #name of job
#BSUB -q pbatch            #queue to use

CURR_DIR=$PWD
ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI
source $PWD/load_ddcmd.sh
parent_outpath=$pfs/temp/$LSB_JOBID
rm -r $parent_outpath 

for simname in mu18.142-1ras1raf-instance1_000000001797; do

  echo "--- Starting $simname ---"
  srcpath=$iopp/applications/mummi/sims-cg/$simname
  outpath=$pfs/temp/$LSB_JOBID/sims-cg/$simname
  mkdir -p $outpath
  cp -r $srcpath/* $outpath/
  locpath=/var/tmp/$USER/cg/${simname}_$LSB_JOBID
  echo $outpath " " $locpath
  mkdir -p $locpath; 
  pushd $locpath

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

  rs=`readlink -f $locpath/restart`
  sname=`basename $(dirname $rs)`
  snum=$(echo "${sname//[!0-9]/}")
  [[ ! -z "$snum" ]] && cframe=`expr $snum + 25000` || cframe=25000

  pushd $outpath
  # 4 tasks on 4 resources on 1 CPU and 4 GPUs per node
  jsrun -n 1 -a 1 -c 1 -g 1 -r 1 ddcMD_GPU -o object.data molecule.data # >> $CURR_DIR/${LSB_JOBID}.log
  popd
  popd
done
echo "Waiting..."
wait
