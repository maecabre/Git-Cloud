Unix Workbench Notes
	Coursera "The Unix Workbench"

	Commands

		echo
		clear
		pwd
		cd
		ls
		mkdir
		touch
		ls -l
		wc 		=> lines, words, characters
		cat
		less	=> displays file to screen
				=> press q to quit
		head	=> displays first 10 lines
		tail	=> displays last 10 lines
		>		=> redirect output
		>>		=> append to a file
		vim
		emacs
		nano
		mv
		cp		=> use -r to copy folders
		rm		=> use -r to rm folders
		man
		apropos	=> searches commands based on descritpion
				=> ex: 'apropos editor' lists editors
		*		=> wildcard, any amount or no amount of occurances

		grep

			egrep	=> grep with more functionality

				Note: states.txt = file with US states in each line alphabetically

				.		=> search placeholder for one character:
							*******************************************************
							$ egrep "i.g" states.txt
								Virginia
								Washington
								West Virginia
								Wyoming
							*******************************************************
				+		=> search placeholder for zero, one, or more occurances:
							*******************************************************
							$ egrep "s+as" states.txt
								Arkansas
								Kansas
							*******************************************************
				{#}		=> search flag for exact number of occurances in a row:
							*******************************************************
							$ egrep "s{2}" states.txt
								Massachusetts
								Mississippi
								Missouri
								Tennessee
							*******************************************************
				{#,#}	=> same as above but could be first or second number of occurances
							*******************************************************
							$ egrep "p{1,2}" states.txt
								Mississippi
								New Hampshire
							*******************************************************
				{#,}	=> same as above, number of occurances or more
							*******************************************************
							$ egrep "p{1,}" states.txt
								Mississippi
							New Hampshire
							*******************************************************
				(){#}	=> capture group in parantheses:
							*******************************************************
							$ egrep "(iss){2}" states.txt
								Mississippi
							*******************************************************

				Note: using small.txt
						-------------------------------------------------------
						abcdefghijklmnopqrstuvwxyz
						ABCDEFGHIJKLMNOPQRSTUVWXYZ
						0123456789
						aa bb cc
						rythms
						xyz
						abc
						tragedy + time = humor
						http://www.jhsp.edu/
						#%&-=***=-&%#
						-------------------------------------------------------

				\w 		=> metacharacter, "word" characters, searches for alphabet/numeric characters
				\W			=> Inverse
							*******************************************************
							$ egrep "\w" small.txt
								abcdefghijklmnopqrstuvwxyz
								ABCDEFGHIJKLMNOPQRSTUVWXYZ
								0123456789
								aa bb cc
								rythms
								xyz
								abc
								tragedy + time = humor
								http://www.jhsp.edu/

							$ egrep "\W" small.txt
								aa bb cc
								tragedy + time = humor
								http://www.jhsp.edu/
								#%&-=***=-&%#
							*******************************************************
				\d 		=> metacharacter, "number" characters, searches for numbers only
				\D 		=> Inverse
							*******************************************************
							$ egrep "\d" small.txt
								(wont work on my terminal)

								Alternatively:
							$ egrep "[0-9]" small.txt
								0123456789

							$ egrep -v "[0-9]" small.txt
								abcdefghijklmnopqrstuvwxyz
								ABCDEFGHIJKLMNOPQRSTUVWXYZ
								aa bb cc
								rythms
								xyz
								abc
								tragedy + time = humor
								http://www.jhsp.edu/
								#%&-=***=-&%#
							*******************************************************
				\s 		=> metacharacter, "space" characters, searches with spaces
				\S 		=> Inverse
							*******************************************************
							$ egrep "\s" small.txt
								aa bb cc
								tragedy + time = humor

							$ egrep "\S" small.txt
								abcdefghijklmnopqrstuvwxyz
								ABCDEFGHIJKLMNOPQRSTUVWXYZ
								0123456789
								aa bb cc
								rythms
								xyz
								abc
								tragedy + time = humor
								http://www.jhsp.edu/
								#%&-=***=-&%#
							*******************************************************
				-v 		=> NOT, invert flag
							*******************************************************
							$ egrep -v "\w" small.txt
								#%&-=***=-&%#
							*******************************************************
				[]		=> custom set, CASE MATTERS, search all characters within brackets
							*******************************************************
							$ egrep "[Mx]" states.txt
								Maine
								Maryland
								Massachusetts
								Michigan
								Minnesota
								Mississippi
								Missouri
								Montana
								New Mexico
								Texas
							*******************************************************
				[^]		=> inverted custom set
							*******************************************************
							$ egrep [^aeiou] small.txt
								abcdefghijklmnopqrstuvwxyz
								ABCDEFGHIJKLMNOPQRSTUVWXYZ
								0123456789
								aa bb cc
								rythms
								xyz
								abc
								tragedy + time = humor
								http://www.jhsp.edu/
								#%&-=***=-&%#
							*******************************************************
				[-]		=> search for characters within alphabetical/numerical range
							*******************************************************
							$ egrep "[e-q]" small.txt
								abcdefghijklmnopqrstuvwxyz
								rythms
								tragedy + time = humor
								http://www.jhsp.edu/
							*******************************************************
				[]		=> custom set, CASE DOESN'T MATTER
							*******************************************************
							$ egrep [e-qE-Q] small.txt
								abcdefghijklmnopqrstuvwxyz
								ABCDEFGHIJKLMNOPQRSTUVWXYZ
								rythms
								tragedy + time = humor
								http://www.jhsp.edu/
							*******************************************************
				\+		=> find '+' without calling metacharacter flag
							*******************************************************
							$ egrep "\+" small.txt
								tragedy + time = humor
							*******************************************************
				^		=> search start of line only
							*******************************************************
							$ egrep "^a" states.txt
								Alabama
								Alaska
								Arizona
								Arkansas
							*******************************************************
				$		=> search end of line only
							*******************************************************
							$ egrep "y$" states.txt
								Kentucky
								New Jersey
							*******************************************************

				Note: if '$' not working, vim file and type ': set fileformat=unix' ':wq'

				|		=> OR opreation
							*******************************************************
							$ egrep "North|South|East|West" states.txt
								North Dakota
								South Carolina
								South Dakota
								West Virginia
							*******************************************************
				-n 		=> flag to show line numbers of output
							*******************************************************
							$ egrep "North" states.txt
								33:North Carolina
								34:North Dakota
							*******************************************************
				-i 		=> flag to ignore case
							*******************************************************
							$ egrep -i "new" states.txt
								New Hampshire
								New Jersey
								New Mexico
								New York
							*******************************************************

		find	=> find file/directory by name recursively within your current location
				=> $ find . -name "*.jpg"

		history	=> displays history of your commands
				=> stored in ~/.bash_history

				=> ~/.bash_profile loads everytime you bring up a shell, great for aliases

		diff	=> shows differences between files
		sdiff 	=> shows differences visually
		md5		=> produce MD5 hash of file based on contents
		shasum 	=> produce SHA-1 hash of file based on contents\

		|		=> [program that produces output] | [program uses pipe output as input instead of a file]

		sort	=> sorts output [punctuations, numbers, alphabetically]
		uniq 	=> sorts output, but only when duplicates are above/below each other

					Recommended:
						=> $ cat file.txt | sort | uniq
						or
						=> $ cat file.txt | sort -u

	Math Operations

		expr	=> used to run bash expressions

			Note: spaces reqired between operators

				***************************************************************
				$ expr 5 + 2
					7
				$ expr 5 - 2
					3
				$ expr 5 \* 2
					10
				$ expr 5 / 2	Note: Bash does integer division
					2
				% expr 10 % 3
					1
				***************************************************************
		bc 		=> bench calculator
					=> use -l flag for decimal values
					=> use -i flag to enter interactive mode (dont need to use echo and pipe)
				***************************************************************
				$ echo "22 / 7" | bc -l
					3.14285714285714285714
				***************************************************************

	Variables

		Rules:	(to avoid accidental overwriting of system variables)
			- lowercase
			- name starts with a letter
			- name contains alphabetic/numeric characters only
			- words separated by underscores
			- no spaces for '='

		Store numbers:

			$ chapter_number=5
			$ echo $chaper_number
				5
			

		Using let:
			*******************************************************************
			$ let chapter_number=$chapter_number+1
			$ echo $chapter_number
				6
			*******************************************************************

		Store strings
			*******************************************************************
			$ the_empire_state="New York"
			$ echo $the_empire_state
				New York
			*******************************************************************

		Command substitution with ($())
			*******************************************************************
			$ math_lines=$(cat math.sh | wc -l)
			$ echo $math_lines
				7
			*******************************************************************

		Variables in strings
			*******************************************************************
			$ echo "I went to school in $the_empire_state"
				I went to school in New York
			*******************************************************************

		Bash Script Default Variables
			$@				= array of arguments
			$1, $2, etc.	= arguments
			$# 				= number of arguments
			*******************************************************************
			$ bash vars.sh red blue green
				Script arguments: red blue green
				First arg: red.
				Second arg:	blue
				Number of arguments: 3
			*******************************************************************



	Week 3

		Logic and If/Else -------------------------------------------------------------------------

			Conditional Exectution - - - - - - - - - - - - - - - - - - - - - - - - - - - 

				$? = exit status
					true = 0
					false = 1

				&& = AND operator

					$ true && echo "Program 1 was executed."
					$ false && echo "Program 2 was executed."
						Progrm 1 was executed

				|| = OR operator

					$ true || echo "Program 1 was executed."
					$ false || echo "Program 2 was executed."
						Progrm 1 was executed












