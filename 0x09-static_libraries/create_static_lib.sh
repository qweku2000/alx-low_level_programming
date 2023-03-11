#!/bin/bash
gcc -c -Werror -Wall -pedantic -Wextra  *.c
ar -rc liball.a *.o
