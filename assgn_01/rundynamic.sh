#!/bin/bash

rm -f *.o *.out *.a *.so
gcc -c -fPIC -I. settype.c setops.c
gcc -shared -o libsetutils.so settype.o setops.o
gcc -L. -I. chocolate.c -lsetutils
export LD_LIBRARY_PATH=.
./a.out
gcc -DSTAT_MODE -L. -I. chocolate.c -lsetutils
export LD_LIBRARY_PATH=.
./a.out