#!/bin/bash
wget -P /tmp https://github.com/Annamuturi/alx-low_level_programming/blob/master/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
