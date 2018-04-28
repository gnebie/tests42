#!/bin/bash

mkdir -p bin2
gcc -Weverything -I../includes -I../libft/include ../libft/libft.a ../libft_malloc.so testbasic1.c -o testbasic1

gcc -Weverything -I../includes -I../libft/include ../libft/libft.a ../libft_malloc.so testfail.c -o testfail


cp testbasic1 ./bin2/
cp testfail ./bin2/
