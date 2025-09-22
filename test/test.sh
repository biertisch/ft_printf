#!/bin/bash

PROG=tester

cc -Wall -Werror -Wextra test/main.c ft_printf.c ft_printf_utils.c ft_printf_utils2.c -o $PROG
./$PROG
rm -f $PROG