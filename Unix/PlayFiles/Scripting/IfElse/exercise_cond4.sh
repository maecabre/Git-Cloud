#!/usr/bin/env bash
# File: exercise_cond4.sh
#
# Prints "Thank Moses it's Friday" if today is Friday

weekday=$(date +%A)
if [[ $weekday = "Friday" ]]
then
	echo "Thank Moses it's Friday"
else
	echo "It's just $weekday."
fi
