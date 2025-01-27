#!/bin/bash
norminette ../cpc04/*/ft*.c
echo

for i in ex{00..03}
do
	echo "$i Compiling..."
	cc -Wall -Werror -Wextra $i/*.c ../c04/$i/*.c -o compile_$i
	echo "$i Compiled! Executing..."
	./compile_$i
	echo "$i Finished!"
	echo
done
