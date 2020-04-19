#!/usr/bin/env bash
# File: howodd.sh
#
# Prints out percentage of odd numbers in a sequence
# uses nevens.sh

function howodd {
	
	source nevens.sh
	local num_even=$(nevens $@)
	local count=0

	for element in $@
	do
		let count=$count+1
	done

	local num_odd=$(($count - $num_even))
	local percentage=$(printf %.2f $(echo "$num_odd / $count" | bc -l))

	echo "fraction: $num_odd / $count"
	echo "percentage: $percentage"
	
}
