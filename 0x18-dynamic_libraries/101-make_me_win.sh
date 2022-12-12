#!/bin/bash
wget -P /tmp  https://github.com/lurldgbodex/alx-low_level_programming/blob/37ef6b071d34c2cdf5c3e866e27459d9cc53cdcc/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
