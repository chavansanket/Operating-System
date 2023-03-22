#!/bin/bash

echo -n "Enter two operands : "
read op1 op2

echo -e "1. Add\n2. Sub\n3. Mul\n4. Div"
echo -n "Enter your choice : "
read choice

res=0

case $choice in
	1)
		res=`expr $op1 + $op2`
		;;
	2)
		res=`expr $op1 - $op2`
		;;
	3)
		res=`expr $op1 \* $op2`
		;;
	4)
		if [ $op2 -ne 0 ]
		then
			res=`expr $op1 / $op2`
		else
			echo "Denominator is 0"
		fi
		;;
	*)
		echo "Invalid choice"
		;;
esac

echo "Result = $res"



























