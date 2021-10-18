#!/bin/bash
gcc -c *.c
ar -rc lib all.a *.o
