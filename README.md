# push_swap
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, I had to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting

## Project description
<p>Subject document of the project: <a href="push_swap_subject.pdf" target="_blank">push_swap</a></p>
Push-swap is a project that makes you think about sorting algorithms. The algorithm you write, has to ouyput the smallest set of operations to sort the set of integers you get.
A list of all the allowed operations I got:

- <b>sa (swap a):</b> Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- <b>sb (swap b)</b>: Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- <b>ss:</b> sa and sb at the same time.
- <b>pa (push a):</b> Take the first element at the top of b and put it at the top of a.
- <b>pb (push b):</b> Take the first element at the top of a and put it at the top of b.
- <b>a (rotate a):</b> Shift up all elements of stack a by 1.
- <b>rb (rotate b):</b> Shift up all elements of stack b by 1.
- <b>rr:</b> ra and rb at the same time.
- <b>rra (reverse rotate a):</b> Shift down all elements of stack a by 1.
- <b>rrb (reverse rotate b):</b> Shift down all elements of stack b by 1.
- <b>rrr:</b> rra and rrb at the same time.

When the input contains duplicate numbers, alphabetical characters or numbers bigger than or smaller than an integer, the program should output "Error" followed by a newine. When the numbers are already sorted, the program should just return.


### Norm writing

This project is written in accordance to the norm of school 42. Some of the most important norm rules are:
- Each function has a maximum of 25 lines
- One single variable declaration per line, all variables on top of the function 
- After the variable declarations, a newline will split them with the rest of the function
- No for loops allowed


## Install and run the project

First, clone my repository on your computer via the green "code" button on top of this page.
All the functions can be compiled using my Makefile. This Makefile has several options:
- run <code>make</code> to create object files for all the standard functions.
- run <code> ./push_swap </code> followed by an arbitrary amount of integers, each separated by a space. My program will output a list of operations used to sort the numbers you have inputted.
- run <code>make clean</code> to delete all the object files
- run <code>make fclean</code> to delete all the object files and the printf.a file.
- run <code>make re</code> recompile the library.
