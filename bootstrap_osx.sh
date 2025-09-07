#!/bin/sh
rm -rf build
mkdir build && cd build
cmake .. -DCMAKE_OSX_SYSROOT=$(xcrun --sdk macosx --show-sdk-path)
make
