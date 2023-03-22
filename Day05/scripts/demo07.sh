#!/bin/bash

# year is divisible by 4			year % 4 == 0		`expr $year % 4` -eq 0
# year is not divisible by 100		year % 100 != 0		`expr $year % 100` -ne 0
# year is divisible by 400			year % 400 == 0		`expr $year % 400` -eq 0

echo -n "Enter year : "
read y

if [ `expr $y % 4` -eq 0 -a `expr $y % 100` -ne 0 -o `expr $y % 400` -eq 0 ]
then
	echo "$y is leap year"
else
	echo "$y is not leap year"
fi




























