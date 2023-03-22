#!/bin/bash

echo -n "Enter path : "
read path

if [ -e $path ]
then
	# path is exist
	# check if path is regular file
	if [ -f $path ]
	then
		echo "Regular file - Contents : "
		cat $path
	# check if path is directory file
	elif [ -d $path ]
	then
		echo "Directory - Contents : "
		cd $path
		ls
	else
		echo "Other file"
	fi
else
	echo "Path does't exist"
fi




























