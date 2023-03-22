#!/bin/bash

str1="pune"
str2="karad"

echo "str1 = $str1, str2 = $str2"

if [ $str1 = $str2 ]
then
	echo "str1 and str2 are equal"
else
	echo "str1 and str2 are not equal"
fi

str3=$str1$str2

echo "str3 = $str3"
	




























