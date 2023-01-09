#!/bin/bash

gcc -c -Wall -Wextra -Werror -pedantic *.c
ar -cr liball.a *.o
