@echo off

mkdir build_windows
cd build_windows

call cmake -G "Visual Studio 12 2013" ..\..\

call cmake --build . --config Release