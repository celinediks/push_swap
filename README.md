# push_swap
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, I had to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting

## Project description
<p>Subject document of the project: <a href="push_swap_subject.pdf" target="_blank">push_swap</a></p>
The objective of this project is to code the printf program. To do this, I learned how to work with variable arguements. 
Our function had to be able to handle the following conversions: <code>cspdiuxX%</code>
The allowed functions in this projects are: malloc, free, write, va_start, va_arg, va_copy and va-end.

### Norm writing

This project is written in accordance to the norm of school 42. Some of the most important norm rules are:
- Each function has a maximum of 25 lines
- One single variable declaration per line, all variables on top of the function 
- After the variable declarations, a newline will split them with the rest of the function
- No for loops allowed


## Install and run the project

First, clone my repository on your computer via the green "code" button on top of this page.
All the functions can be compiled using my Makefile. This Makefile has several options:
- run <code>make</code> to create object files for all the standard functions, and a archive library printf.a
- next: in the main function of my ft_printf.c file, you can test my printf function trying different conversions of your own choice, for example:
<code>ft_printf("Magic %s is %5d", "number", 42);</code>
- run <code>make clean</code> to delete all the object files
- run <code>make fclean</code> to delete all the object files and the printf.a file.
- run <code>make re</code> recompile the library.
