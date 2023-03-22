#!/bin/bash

# function Declaration and Definition
function print_msg()
{
	echo "This is my first function"
}

function print_number()
{
	# args are accessed like $1, $2, $3, .....
	echo "number = $1"
}

function addition()
{
	# op1 -> $1
	# op2 -> $2
	res=`expr $1 + $2`
	echo $res
}

# function call
print_msg

print_number 100 

sum=`addition 10 20`
echo "sum = $sum"



























