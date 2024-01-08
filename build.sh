#!/bin/bash

# create build directory
mkdir -p build

# configure the package
cmake -S . -B build

# build the package
cmake --build build

# test the package
cd build && ctest --rerun-failed --output-on-failure