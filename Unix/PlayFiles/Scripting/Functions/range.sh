#!/usr/bin/bash env
# File: range.sh
#
# Takes one number as an argument
# prints all of the numbers between 0 and that number

function range {

	if [[ $1 -gt 0 ]]
	then
		eval echo {0..$1}
	
	else
		echo "Please enter positive number as input argument"
	
	fi
}
