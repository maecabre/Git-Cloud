#!/usr/bin/env bash
# File: plier.sh
#
# Mutiplies together a sequence of numbers

function plier {

	local product=1

	for element in $@
	do
		let product=$element\*$product
	done

	echo $product
}
