#!/bin/bash

str=nitin
rev=`echo $str | rev`

echo "str = $str, rev = $rev"

if [ $str = $rev ]
then 
	echo "$str is palindrome"
else
	echo "$str is not palindrome"
fi





























