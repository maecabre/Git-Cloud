#!/usr/bin/env bash
# File: nevens.sh
#
# Prints the number of even numbers with a sequence input
# Uses isiteven.sh

function nevens {

	source isiteven.sh

	local even_count=0

	for element in $@
	do

		local even_flag=$(isiteven $element)

		if [[ $even_flag -eq 1 ]]
		then
			let even_count=$even_count+1
		fi

	done

	echo $even_count

}
