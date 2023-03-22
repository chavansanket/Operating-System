#!/bin/bash

file_cnt=0
dir_cnt=0

echo "Current Directory Contents : "

for entry in `ls`
do
	if [ -f $entry ]
	then
		echo "$entry - Regular file"
		file_cnt=`expr $file_cnt + 1`
	elif [ -d $entry ]
	then
		echo "$entry - Directory"
		dir_cnt=`expr $dir_cnt + 1`
	else
		echo "File is neither reular nor directory"
	fi
done

echo "Number of files : $file_cnt"
echo "Number of Directories : $dir_cnt"


























