#!/bin/sh
CC=gcc
CFLAGS="-Wall -Wextra -Werror"
# Compilo con -DTESTING para evitar el main en starter.c
$CC $CFLAGS -DTESTING -o test_challenge05 starter.c test_challenge05.c
if ./test_challenge05; then
  printf "\033[0;32mPASSED\033[0m"
else
  printf "\033[0;31mFAILED\033[0m"
fi
