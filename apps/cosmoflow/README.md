# Quick Notes

- The application has original data in HDF5 format. It can be downloaded using download.sh
- Once downloaded the data has to be converted into TFRecord using prepare.sh
- For environment install anaconda and then use create<>.sh
- apply the patch cosmoflow_tf-2.1.3.patch `cd code; git apply /path/to/some-changes.patch`
- Then we can run the application bsub run_lassen.sh
