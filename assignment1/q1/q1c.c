#include <stdio.h>

int main(){
	int i, j, k, ioff, joff, m, n;
	double den;
	double A[4][4];
	double M[3][3];
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 3; j++){
			den = (i+j + 1);
			A[i][j] = 1/den;
			printf("%f ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for( i = 0; i<=3; i++){
		for( j = 0; j<3; j++){
				do{
					M[i][j] = A [i+1][k];
					k++;
				
				}while(k != j);
			}
			printf("%f ", M[i][j]);
	}
	printf("\n");

			




	
}


double det(double A[3][3]){
        return A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
}




