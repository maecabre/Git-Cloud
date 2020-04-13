#!/usr/bin/env bash
# File: exervise_cond1.sh
#
# Takes a string as an argument and prints "how proper"
# if the string starts with a capial letter


if [[ $1 =~ ^[ABCDEFGHIJKLMNOPQRSTUVWXYZ] ]]
then
	echo "How proper"
else
	echo "Not proper"
fi
