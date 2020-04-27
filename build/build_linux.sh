#!/bin/bash

mkdir build_linux
cd build_linux/

cmake -G "Eclipse CDT4 - Unix Makefiles" ../../

cmake --build ./ --config Release