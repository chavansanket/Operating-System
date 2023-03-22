#!/bin/bash

echo -n "Enter number : "
read num

echo "$num 's Table : "
i=1								# init
until [ $i -eq 11 ]				# cond
do
	res=`expr $num \* $i`		# body
	echo $res
	i=`expr $i + 1`				# mod
done





























