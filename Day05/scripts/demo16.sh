#!/bin/bash

echo "Name of script : $0"
echo "Count of Positional Parameters : $#"

echo "List of Positional Parameters : $*"

echo "1st param = $1"
echo "2nd param = $2"
echo "3rd param = $3"

max=0
for param in $*
do
	if [ $param -gt $max ]
	then
		max=$param
	fi
done

echo "Max = $max"























