#!/bin/bash
wget -P /tmp/ https://raw.github.com/sixtusagbo/alx-low_level_programming/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
