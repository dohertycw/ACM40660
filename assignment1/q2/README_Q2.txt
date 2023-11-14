This folder contains my solutions for question 2 of assignment 1. Within are 6 files, labelled q2(a-f).c, each corresponding to each question on the assignment.

q2a.c creates a loop that runs from 1 to 3.

q2b.c contains a switch-case construct to select for three different values of n, a and r.

q2c.c finds Sn for dummy values of n, a and r for the summation and formula.

q2d.c compares the results of Sn for summation and results for dummy values,

q2e.c finds Sn for summation and results and compares the results for given values of n, a and r. q2e.c is also the completed programme which carries out every step.

q2f.txt contains comments on the results acquired.

Each file contains comments containing how the code works. If certain blocks of code were explained in intial files, they are not explained again in later files.

To compile each code, enter the bash script:
	gcc -o q2x q2x.c -lm
where x is an suffix from a-e and then:
	./q2x
to run the code. q2f may be opened in any text editor.
