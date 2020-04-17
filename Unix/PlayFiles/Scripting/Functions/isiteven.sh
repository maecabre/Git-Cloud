#!/usr/bin/env bash
# File: isiteven.sh
#
# Prints 1 if number = even
# Prints 0 if number = odd

function isiteven {

	local number=$1

	if [[ $number%2 -eq 0 ]]
	then
		echo "1"
	else
		echo "0"
	fi

}



