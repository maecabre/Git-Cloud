#!/usr/bin/env bash
# File: exercise_array1.sh
#
# Define an array. Argument entered as input determines index
# that is used to print out an array element.

states=(Alabama Alaska Arizona Arkansas California Colorado Connecticut Delaware Florida Georgia Hawaii Idaho Illinois Indiana Iowa Kansas Kentucky Louisiana Maine Maryland Massachusetts Michigan Minnesota Mississippi Missouri Montana Nebraska Nevada "New Hampshire" "New Jersey" "New Mexico" "New York" "North Carolina" "North Dakota" Ohio Oklahoma Oregon Pennsylvania "Rhode Island" "South Carolina" "South Dakota" Tennessee Texas Utah Vermont Virginia Washington "West Virginia" Wisconsin Wyoming)


echo "Enter a number from 0 to 49"
read var


if [[ $var =~ [0-9] ]] && [[ ! $var =~ [^0-9] ]]
then
	echo "Number entered: $var"
	
	if [[ $var -ge 0 ]] && [[ $var -le 49 ]]
	then
		echo "State selected: ${states[$var]}"
	else
		echo "Choose a number between 0 and 49"
	fi

else
	echo "Invalid input"

fi
