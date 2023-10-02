#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	//Testing to use the tan function within C.
	int i;
	float sum, x;
	sum = tan(0) + tan(M_PI/3);
	printf("Our test sum gives %f \n", sum);

	//Initial sum tests
	i = 0;
	x  = 0.0;
	for(i = 0; i<12; i++) {
		x = i*((M_PI/3)/11);
		printf ("x = %f \n ", x);
	}
}
