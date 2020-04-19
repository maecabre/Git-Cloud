#!/usr/bin/env bash
# File: threelevels.sh
#
# Write a program with three levels of nesting

# Loop 1
count=0
while [[ count -lt 3 ]] 
do
	echo "Count: $count"

	# Loop 2
	for i in {0..2}
	do
		echo "	i: $i"

			# Loop 3
			for j in {a..c}
			do
				echo "		j: $j"
			done

	done


	let count=$count+1
done
