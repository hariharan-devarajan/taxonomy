#!/bin/bash
module load gcc/11.2.1 cmake/3.23.1 cuda/11.8
conda_dir=/usr/workspace/haridev/anaconda3-ppc
source $conda_dir/bin/activate
rm -rf opence-1.9.1-cuda-11.8
conda env create --prefix opence-1.9.1-cuda-11.8 -f lassen_environment.yaml --force
conda activate ./opence-1.9.1-cuda-11.8
