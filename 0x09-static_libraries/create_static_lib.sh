#!/bin/bash
gcc -c *.c -Werror -Wall -pedantic -Wextra -o *.o 
ar -rc liball.a *.o
