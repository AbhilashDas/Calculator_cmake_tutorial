#!/bin/bash

config=$1
if [ -z $config ]
then
	config=Release
fi

echo $config
mkdir build_linux
cd build_linux/

cmake -G "Eclipse CDT4 - Unix Makefiles" -DCMAKE_BUILD_TYPE=$config ../../

cmake --build ./ --config $config