#!/usr/bin/env bash
# File: fib.sh
#
# Prints fibonacci sequence based on number input

function fib {

	local count=$1

	if [[ $count -eq 1 ]]
	then
		echo 0
	
	elif [[ $count -eq 2 ]]
	then
		echo 0 1
	
	elif [[ $count -gt 2 ]]
	then	
		# Define count for for-loop
		let count=$count-3
		local list=$(eval echo {0..$count})

		# Define starting variables
		local var_left=0
		local var_right=1
		local temp=0
		local arr=($var_left $var_right)

		# Create fibonacci sequence
		for i in $list
		do
			let temp=$var_left+$var_right
			arr+=($temp)
			let var_left=$var_right
			let var_right=$temp
		done
		echo ${arr[*]}

	else
		echo "Please input number greater than 0 as argument"
	
	fi
}
