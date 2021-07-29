#!/bin/bash
COCO_PATH=$PWD/data/coco/
main_path=$PWD
source ./setup_object_detection_pt.sh
cd code/PyTorch/Object_detection/faster-rcnn.pytorch 
rm -rf data
mkdir -p data data/pretrained_model
set -x
if [[ ! -d data/coco ]]; then
    cd data
    git clone https://github.com/pdollar/coco.git && cd coco/PythonAPI && make -j32 && cd ../../
    cd ../
fi
if [[ ! -f data/coco/annotations || ! -h data/coco/annotations ]]; then
    ln -sv $COCO_PATH/annotations data/coco/annotations
fi
if [[ ! -f data/coco/images  || ! -h data/coco/images ]]; then
    ln -sv $COCO_PATH data/coco/images
fi
