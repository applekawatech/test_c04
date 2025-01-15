#!/bin/bash
norminette ../c04/*/ft*.c
echo

for i in ex{02..02}
do
	echo "$i Compiling..."
	cc -Wall -Werror -Wextra $i/*.c ../c04/$i/*.c -o compile_$i
	echo "$i Compiled! Executing..."
	./compile_$i
	echo "$i Finished!"
	echo
done
