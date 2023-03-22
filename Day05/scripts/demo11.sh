#!/bin/bash

sum=0

for var in 1 2 3 4 5 6
do
	echo "var = $var"
	sum=`expr $sum + $var`
done

echo "Sum = $sum"




























