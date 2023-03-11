#!/bin/bash
gcc -Werror -Wall -pedantic -Wextra -c *.o 
ar -rc liball.a *.o
