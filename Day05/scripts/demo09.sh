#!/bin/bash

echo -n "Enter number : "
read num

echo "$num 's Table : "
i=1
while [ $i -le 10 ]
do
	res=`expr $num \* $i`
	echo $res
	i=`expr $i + 1`
done





























