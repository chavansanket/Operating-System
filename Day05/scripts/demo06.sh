#!/bin/bash

echo -n "Enter two numbers : "
read num1 num2

max=0

if [ $num1 -eq $num2 ]
then
	max=$num1
	echo "num1 and num2 are equal"
elif [ $num1 -gt $num2 ]
then
	max=$num1
	echo "num1 is greater"
else
	max=$num2
	echo "num2 is greater"
fi

echo "Maximum value = $max"


























