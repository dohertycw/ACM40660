#include <stdio.h>

//Uncomment the block below by removing the /* and */ to generate a test matrix to show that the det function works.

/*double det(double A[3][3]);

int main(){
	int i, j;
	double M[3][3];
	double deter;
	for(i = 0; i<=2; i++){
		for(j = 0; j<=2; j++){
			M[i][j] = (i+j);
			printf("%3.0f ", M[i][j]);	
		}
	printf("\n");
	}

	deter = det(M);
	printf("%3.0f \n", deter);
	


}*/

//Constructing det function to return the determinant of a 3x3 matrix.

double det(double A[3][3]){
	return A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]); 
}
