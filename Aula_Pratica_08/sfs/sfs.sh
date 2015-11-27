#!/bin/bash
LD_LIBRARY_PATH=`pwd`/modbus/lib
export LD_LIBRARY_PATH
make clean
make
./sfs
