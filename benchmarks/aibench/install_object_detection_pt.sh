#!/bin/bash
set -x

source $PWD/setup_object_detection_pt.sh
main_dir=$PWD
cd code/PyTorch/Object_detection/faster-rcnn.pytorch/lib
python setup.py build develop 
 

