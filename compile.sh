#!/bin/bash
cc -c -g C_Math.c && cc -c -g main.c && cd Vector && cc -c -g vector.c && cc -o main main.o C_Math.o ./Vector/vector.o