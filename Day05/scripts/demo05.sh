#!/bin/bash

# Area of circle

echo -n "Enter radius of circle : "
read rad

area=`echo "3.142 * $rad * $rad" | bc`

echo "Area of circle = $area"




























