#!/usr/bin/env bash
# File: exercise_cond3.sh
#
# Takes two arguments. If both arguments are numbers, print their sum
# otherwise print both arguments.

if [[ $1 =~ [0-9] ]] && [[ ! $1 =~ [^0-9] ]]
then
	echo "$1 is a number"
	
	if [[ $2 =~ [0-9] ]] && [[ ! $2 =~ [^0-9] ]]
	then
		echo "$2 is a number"
		sum=$(expr $1 + $2)
		echo "Sum = $sum"

	else
		echo "$2 is not a number"
	fi

else
	echo "$1 is not a number"
fi
