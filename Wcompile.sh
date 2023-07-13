#!/bin/bash
cd ~/C_Math/rational && x86_64-w64-mingw32-gcc -c -g ratio.c
#cd ~/C_Math/sequence&series && cc -c -g sequence&series.c
cd ~/C_Math && x86_64-w64-mingw32-gcc -c -g C_Math.c && x86_64-w64-mingw32-gcc -c -g main.c && cd Vector && x86_64-w64-mingw32-gcc -c -g vector.c && cd .. && x86_64-w64-mingw32-gcc -o main.exe main.o C_Math.o ./Vector/vector.o ./rationa>
