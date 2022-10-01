#!/bin/bash -e
gcc -c *.c
ar cr liball.a *.o
