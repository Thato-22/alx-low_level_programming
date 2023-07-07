#!/bin/bash
gcc -WALL -pedantic -Werror -Wextrab -c *.c
ar -rc liball.a *.o
ranlib liball.a
