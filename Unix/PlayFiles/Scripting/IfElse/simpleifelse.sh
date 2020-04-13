#!/usr/bin/env bash
# File: simpleifelse.sh

echo "Start Program"

if [[ $1 -eq 4 ]]
then
	echo "Thanks for entering $1"
else
	echo "You entered: $1, not what I was looking for."
fi

echo "End Program"
