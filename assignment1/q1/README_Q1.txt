Within this folder are my files for q1. 

q1a.c generates a loop that produces the requested matrix.

q1b.c calculates the determinant of any 3x3 matrix (this code does not function by itself unless comments on the dummy matrix within are removed and is included within later files).

q1c.c uses Cramer's rule to calculate the determinant of the original given matrix.

q1d.c write the given matrix and determinant to the standard output usnig a formatted print statemtent. q1d.c is also the completed programme which carries out every step.

To compile these files (except for q1b.c unless comments are removed), run the bash script:
	gcc -o q1x q1x.c -lm
where x = a, c, d. Again, q1b.c can be compiled if the commented block is uncommented. To run the generated executables enter:
	./q1x
