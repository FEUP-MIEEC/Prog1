#!/usr/bin/env bash

#php "build/1.php"
clang "Aula_Pratica_01/exp.c"
OUT=$?

if [ OUT == 0 ]; then
	EX[0101]=1;	
else
	EX[0101]=0;
fi

echo ${EX[0101]}


#clang "Aula_Pratica_01/input.c"
