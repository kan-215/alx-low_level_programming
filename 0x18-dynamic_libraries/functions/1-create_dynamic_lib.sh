#!/bin/bash
gcc -Wall -wextra -Werror -pedantic -o -fPIC *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
