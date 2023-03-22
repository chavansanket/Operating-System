#!/bin/bash

arr=(1 2 3 4 5)

echo "arr elements = ${arr[*]}"
echo "Number of elements = ${#arr[*]}"

echo "arr[0] = ${arr[0]}"
echo "arr[1] = ${arr[1]}"
echo "arr[2] = ${arr[2]}"
echo "arr[3] = ${arr[3]}"
echo "arr[4] = ${arr[4]}"

echo -n "array : "
i=0
while [ $i -lt 5 ]
do
	echo -n "${arr[$i]} "
	i=`expr $i + 1`
done
echo ""

echo -n "Array : "
for ele in ${arr[*]}
do
	echo -n "$ele "
done
echo ""























