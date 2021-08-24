#!/bin/bash

cd data
wget -r -np -l 5 -A hdf5 -nd https://portal.nersc.gov/project/m3363/cosmoUniverse_2019_05_4parE/
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
