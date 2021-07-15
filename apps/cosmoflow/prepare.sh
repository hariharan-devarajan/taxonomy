#!/bin/bash

set -x

mkdir -p $PWD/data/output/train
mkdir -p $PWD/data/output/validation
python3 code/prepare.py -i $PWD/data/original/train -o $PWD/data/output/train --write-tfrecord --gzip --n-workers 8
python3 code/prepare.py -i $PWD/data/original/validation -o $PWD/data/output/validation --write-tfrecord --gzip --n-workers 8
