#!/bin/bash
wget -O /tmp/nrandom.so https://github.com/Annamuturi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so 
