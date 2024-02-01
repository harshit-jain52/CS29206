#!/bin/bash

cd ../lib
make
cd ../app
gcc -L../lib -I../lib examples.c -lrecrel
./a.out
rm -f ./a.out
