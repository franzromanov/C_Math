# C_Math
Diy c based mathematic libraries

### compiling example on linux:  
    cd ~/C_Math && cc -c -g C_Math.c && cc -c -g main.c && cd Vector && cc -c -g vector.c && cd .. && cc -o main main.o C_Math.o ./Vector/vector.o
### Or run the compile.sh bash script(on linux):
    sudo chmod 777 compile.sh && ./compile.sh
