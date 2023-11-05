#include <stdio.h>

int main(){
	int i, j, k;
	double den;
	double M[4][4];
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 3; j++){
			den = (i+j + 1);
			M[i][j] = 1/den;
			printf("%f ", M[i][j]);
		}
		printf("\n");
	}	
}
