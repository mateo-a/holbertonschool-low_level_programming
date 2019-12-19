#!/bin/bash
wget -P /tmp https://github.com/mateo-a/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/makewin.so
export LD_PRELOAD=/tmp/makewin.so
