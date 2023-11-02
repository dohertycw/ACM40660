#include <stdio.h>
float degtorad(float degang);
int main(void) {
	float degang, radang;
	degang = 10.0;
	radang = degtorad(degang);
	printf(" Deg %f, Rad %f\n", degang, radang);
	return 0;
}

float degtorad(float degang) {
	float pi = 3.1415927;
	degang = degang + 10.0;
	return( (pi* degang)/180.0 );
}
