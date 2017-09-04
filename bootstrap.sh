#!/usr/bin/env bash
#gcc -shared -fPIC -o libax.so ax.c
mkdir -p cmake-build-debug && cd cmake-build-debug
cmake ..
make
cd ..
gcc -o main main.c -L./cmake-build-debug -lax
LD_LIBRARY_PATH=./cmake-build-debug ./main
rm -f ./main