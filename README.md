Monty Bytecode Interpreter
Documentation
Installation
compile with the following:
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
usage: ./monty
filename should contain the Operators
One operator per line
spaces and newlines are ignored
'#' sign represent comments and the line will be ignored
Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

monty.h - contains all the structure and prototype
main.c - main function for monty interpreter
Helper
newline_check.c - checks if the first character in a line is a newline
tokenizer.c - tokenizes the command and value in the line
find_op.c - uses the first token (command) to find what operator(instruction) to use
list_len.c - returns the number of element in the stack
free_l.c - free everything on the stack
check_val.c - checks if everything on the second command are all digits
