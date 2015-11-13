#!/usr/bin/env bash

echo "Begin Building:"

for file in build/*
do
	if [[ ${file##*.} -eq "sh" ]]; then
		chmod +x $file
		$file
	fi
		
done