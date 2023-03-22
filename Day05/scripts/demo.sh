#!/bin/bash

arr=("vim", "gcc", "git", "ncal", "rename")

echo "Updating package list...."
sudo apt-get update

if [ $? -eq 0]
then 
	i=0
	while [ $i -le ${#arr[*]} ] 
	do
		sudo apt-get install ${arr[$i]}
		if [ $? -eq 0 ]
		then
			echo "${arr[$i]} is installed successfully.."
		else
			echo "${arr[$i]} is not installed successfully.."
		fi
		i=`expr $i + 1`
	done
else
	echo "cmd is failed"
fi




























