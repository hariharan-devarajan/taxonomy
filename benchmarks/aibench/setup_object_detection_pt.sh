source /p/gpfs1/haridev/software/anaconda3/etc/profile.d/conda.sh
module load cudnn-7.6.5.32-10.2-linux-ppc64le-gcc-8.3.1-eg2jjvu
conda activate $PWD/env_object_detection_pt_env
export PATH=$PWD/env_object_detection_pt_env/lib/python3.6/site-packages:$PATH
export PYTHONPATH=$PWD/env_object_detection_pt_env/lib/python3.6/site-packages:$PYTHONPATH
export LC_ALL=en_US.utf-8
export LANG=en_US.utf-8
