#!/bin/bash

rm -f *.o *.out *.a *.so
gcc -c -I. settype.c setops.c
ar rcs libsetutils.a settype.o setops.o
gcc -L. -I. chocolate.c -lsetutils
./a.out
gcc -DSTAT_MODE -L. -I. chocolate.c -lsetutils
./a.out