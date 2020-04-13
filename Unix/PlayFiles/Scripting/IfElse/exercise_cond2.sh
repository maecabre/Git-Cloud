#!/usr/bin/env bash
# File: exercise_cond2.sh
#
# Takes one argument and prints "even" if the first argument is
# an even number, or "odd" if the first argument is and odd number

if [[ $1 =~ [0123456789] ]] && [[ ! $1 =~ [^0-9] ]]
then
	echo "$1 is a number"
	
	if [[ $1%2 -eq 0 ]]
	then
		echo "$1 is even"
	else
		echo "$1 is odd"
	fi
else
	echo "$1 is not a number"
fi
