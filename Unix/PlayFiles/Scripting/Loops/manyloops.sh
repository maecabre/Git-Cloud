#!/usr/bin/env bash
# File: manyloops.sh

echo "Explicit list:"

# Loop 1
for picture in img001.jpg img002.jpg img451.jpg
do
	echo "picture is equal to $picture"
done

echo ""
echo "Array:"

stooges=(curly larry moe)

# Loop 2
for stooge in ${stooges[*]}
do
	echo "Current stooge: $stooge"
done

echo ""
echo "Command substitution"


# Loop 3
for code in $(ls)
do
	echo "$code is a bash script"
done
