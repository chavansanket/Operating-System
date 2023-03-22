#!/bin/bash


# Area of Rectangle
echo -n "Enter length and Bredth of Rectangle : "
read le br

echo "Rectangle : Length = $le, Bredth = $br"

# area=`expr $le \* $br`
area=$(expr $le \* $br)

echo "Area of rectangle = $area"




























