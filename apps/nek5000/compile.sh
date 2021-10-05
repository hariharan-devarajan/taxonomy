#!/bin/bash

APP_DIR=/usr/workspace/iopp/applications/Nek5000
CASE_DIR=$APP_DIR/run/expansion
BIN_DIR=$APP_DIR/bin

cd $CASE_DIR
$BIN_DIR/makenek 

CASE_DIR=$APP_DIR/run/vortex
cd $CASE_DIR
$BIN_DIR/makenek
