#!/bin/bash
wget -P /tmp https://github.com/yousefayman2003/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD="/tmp/libgm.so"
