#!/usr/bin/env bash
# exercise_var3.sh

echo "Number of args: $#"
echo "First arg: $1"
multiplied=($(expr $# \* $1))
echo "Multiplied: $multiplied"
