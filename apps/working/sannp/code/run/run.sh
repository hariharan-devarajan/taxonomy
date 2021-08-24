#!/bin/bash

#export PATH=/net/hulk/PMD/yufeng/miniconda3-py36-tf-gpu/bin:$PATH
iGPU=1

initial_set="../Data/MOVEMENT.train.first100"
training_set="../Data/MOVEMENT.train"
validation_set="../Data/MOVEMENT.valid"
test_set="../Data/MOVEMENT.test"

echo "STARTING..." `date`

echo STEP 1 `date`
#python ../main.py $initial_set --task -1 --validationSet $validation_set --testSet $test_set --iGPU $iGPU --dcut 6.2 --Rcut 1.9 --n2bBasis 16 --n3bBasis 4

echo STEP 2 `date`
python ../main.py $initial_set --task -2 --validate 100 --test 0 --chunkSize 0 --epoch 500 --iGPU $iGPU --dcut 6.2 --Rcut 1.9 --learningRate 0.0001 --n2bBasis 16 --n3bBasis 4 --nL1Nodes 40 --nL2Nodes 40

echo STEP 3 `date`
#python ../main.py $training_set --task -1 --restart --iGPU $iGPU

echo STEP 4 `date`
#python ../main.py $training_set --task -2 --restart --validate 10 --test 10 --epoch 50 --chunkSize 10000 --iGPU $iGPU

echo STEP 5 `date`
#python ../main.py $training_set --task -3 --restart --validate 1 --test 1 --epoch 25 --testSet $test_set --validationSet $validation_set --iGPU $iGPU --feRatio 1.0 --Rcut 1.9

echo "FINISHED! " `date`
