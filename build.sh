#!/usr/bin/env bash

echo "Begin Building:"

for file in build/*
do
	echo ${file##*.}
	if [ ${file##*.} == 'sh' ]; then
		chmod +x $file
		$file
	fi
		
done