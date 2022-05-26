#!/bin/bash

conda create --name galaxy-pegasus python=3.6
conda activate galaxy-pegasus
conda config --prepend channels https://public.dhe.ibm.com/ibmdl/export/pub/software/server/ibm-ai/conda-early-access/
conda install pytorch torchvision cudatoolkit=10.2
conda install -c conda-forge gitpython
conda install astropy Pillow
conda install -c anaconda pegasus-wms.api
conda install numpy
conda install joblib pandas optuna seaborn
conda install -c conda-forge scikit-plot
