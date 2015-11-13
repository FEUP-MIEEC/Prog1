#!/usr/bin/env bash

echo "Begin Building:"

for file in build/*
do
	chmod +x $file
	$file
done