#!/bin/bash

set -exo pipefail

data_folder=data/1M
mkdir -p $data_folder
rows=$((1024*1024))
#box.raw
cols=6
file=$data_folder/force.raw
rm -f $file
for row in `seq $rows`
do
  str=""
  for col in `seq $cols`
  do
    R=$(($(($RANDOM%100))))
    str="$str 0.$R"
  done
  str="$str"
  echo $str >> ./$file
done

cols=6
file=$data_folder/coord.raw
rm -f $file
for row in `seq $rows`
do
  str=""
  for col in `seq $cols`
  do
    R=$(($(($RANDOM%100))))
    str="$str 0.$R"
  done
  str="$str"
  echo $str >> ./$file
done

cols=9
file=$data_folder/box.raw
rm -f $file
for row in `seq $rows`
do
  str=""
  for col in `seq $cols`
  do
    R=$(($(($RANDOM%100))))
    str="$str 0.$R"
  done
  str="$str"
  echo $str >> ./$file
done

cols=9
file=$data_folder/virial.raw
rm -f $file
for row in `seq $rows`
do
  str=""
  for col in `seq $cols`
  do
    R=$(($(($RANDOM%100))))
    str="$str 0.$R"
  done
  str="$str"
  echo $str >> ./$file
done

file=$data_folder/type.raw
rm -f $file
echo "0 1" > $file
