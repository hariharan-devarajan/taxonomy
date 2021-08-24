#!/bin/bash
#INFO (nodes) 1
#INFO (walltime) inf
#INFO (flux_uri) local:///var/tmp/flux-hELKdS/local-11
#INFO (flux version) 0.26.0


ulimit -m 28 10485760
echo "date:" `date`
echo "host:" `hostname`
echo "pwd: " `pwd`
echo "uri:  " $FLUX_URI

for simname in mu12-0ras0raf-instance1_000000001704; do 

  echo "--- Starting $simname ---"
  outpath=/p/gpfs1/splash/campaign4/roots/tests/mummi_c4_test_070221/sims-cg/$simname
  locpath=/var/tmp/mummi/cg/${simname}_20210715-143741

  mkdir -p $locpath; cd $locpath

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


  flux mini run -n 1 -N 1 -c 3 -g 1 -o mpi=spectrum sh -c  "autobind-12 cganalysis  --simname $simname  --pathremote $outpath  --path $locpath  --fstype mummi  --fbio mummi  --maxsimtime 5000000  --frameProcessBatchSize 5  --simbin ddcMD_GPU  --siminputs $outpath  -c  -d 2  --fcount $cframe  --nprocs 3 >> cg_analysis.out 2>&1" &

  sleep 10
done
echo "Waiting..."
wait

#### copy log files back
for simname in mu12-0ras0raf-instance1_000000001704; do 

  outpath=/p/gpfs1/splash/campaign4/roots/tests/mummi_c4_test_070221/sims-cg/$simname
  locpath=/var/tmp/mummi/cg/${simname}_20210715-143741
  cp $locpath/*.log $outpath/
  cp $locpath/*.out $outpath/
done

