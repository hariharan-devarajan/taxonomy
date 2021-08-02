#!/bin/bash

cd data
wget --spider -r --accept "*.hdf5" --no-parent https://portal.nersc.gov/project/m3363/cosmoUniverse_2019_05_4parE/ | grep hdf5
exit

#rm -rf final
#mkdir -p final
#find portal.nersc.gov/ -name '*.hdf5' -exec mv {} final/ \;
#rm -rf portal.nersc.gov

#cd final
#mkdir train
#mkdir validation
#val=`ls -1 *.hdf5  |  sort -n | wc -l`
#test=$(echo "scale=0; ($val*0.80 + 1) /1" | bc)
#ls -1 *.hdf5 |  sort -n | head -n $test | xargs -i mv "{}" train/
#mv *.hdf5 validation/
