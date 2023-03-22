#!/bin/bash

cnt=0

echo "Current Directory Contents : "

for entry in `ls`
do
	cnt=`expr $cnt + 1`
	echo $entry
done

echo "Number of files : $cnt"


























