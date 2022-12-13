#!/bin/bash
for file in *.c
do
	gcc -c -fpic "$file"
done

gcc -shared -o liball.so *.o
