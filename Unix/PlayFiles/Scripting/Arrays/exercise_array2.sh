#!/usr/bin/env bash
# File: exercise_array2.sh
#
# Define two arrays. Print sum of array lengths

states=(Alabama Alaska Arizona Arkansas California Colorado Connecticut Delaware Florida Georgia Hawaii Idaho Illinois Indiana Iowa Kansas Kentucky Louisiana Maine Maryland Massachusetts Michigan Minnesota Mississippi Missouri Montana Nebraska Nevada "New Hampshire" "New Jersey" "New Mexico" "New York" "North Carolina" "North Dakota" Ohio Oklahoma Oregon Pennsylvania "Rhode Island" "South Carolina" "South Dakota" Tennessee Texas Utah Vermont Virginia Washington "West Virginia" Wisconsin Wyoming)

presidents=("George Washington" "John Adams" "Thomas Jefferson" "James Madison" "James Monroe" "John Quincy Adams" "Andrew Jackson" "Martin Van Buren" "William H. Harrison" "John Tyler" "James K. Polk" "Zachary Taylor" "Millard Fillmore" "Franklin Pierce" "James Buchanan" "Abraham Lincoln" "Andrew Johnson" "Ulysses S. Grant" "Rutherford B. Hayes" "James A. Garfield" "Chester A. Arthur" "Grover Cleveland" "Benjamin Harrison" "Grover Cleveland" "William McKinley" "Theodore Roosevelt" "William H. Taft" "Woodrow Wilson" "Warren G. Harding" "Calvin Coolidge" "Herbert Hoover" "Franklin D. Roosevelt" "Harry S. Truman" "Dwight D. Eisenhower" "John F. Kennedy" "Lyndon B. Johnson" "Richard M. Nixon" "Gerald R. Ford" "Jimmy Carter" "Ronald Reagan" "George H. W. Bush" "Bill Clinton" "George W. Bush" "Barack Hussein Obama" "Donald J. Trump")

num_states=${#states[*]}
num_pres=${#presidents[*]}

sum=$(expr $num_states + $num_pres)

echo "Sum Total: $sum"
