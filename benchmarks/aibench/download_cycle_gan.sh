#!/bin/bash
set -x

mkdir -p data/cycle_gan
cd data/cycle_gan
bash ../../code/TensorFlow/Image_to_Image/CycleGAN/download_datasets.sh maps
