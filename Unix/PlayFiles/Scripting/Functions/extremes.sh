#!/usr/bin/bash env
# File: extremes.sh
#
# Prints max and min of sequence input

function extremes {

	if [[ $# -ge 1 ]] && [[ $@ =~ [^0-9] ]]
	then
		local max=$1
		local min=$1

		for element in $@
		do
			if [[ $max -lt $element ]]
			then
				let max=$element
			fi
		
			if [[ $min -gt $element ]]
			then
				let min=$element
			fi
		done
	
		echo "Max: $max"
		echo "Min: $min"
	
	else
		echo "Please enter multiple numbers as input arguments"
	fi
}
