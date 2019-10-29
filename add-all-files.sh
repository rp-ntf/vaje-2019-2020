#!/bin/bash 
find ./ -iname '*.mk' -o -iname '*.project' -o -iname '*.txt' -o -iname '*.c' -o -iname '*.cpp' -o -iname '*.csv' | xargs git add
git add *.workspace Makefile
