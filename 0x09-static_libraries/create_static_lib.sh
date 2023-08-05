#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c
ar rcs liball.a *.o
