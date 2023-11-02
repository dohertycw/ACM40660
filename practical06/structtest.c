#include <stdio.h>

int main(void){
	int n, p, q;
	int i, j, k;
	n = 5, p =3, q=4;
	double A[n][p];
	double B[p][q];
	double C[n][q];
	C[n][q] = 0.0;
	printf("Matrix A:\n");
	for(j = 0; j<n; j++){
		for(k =0; k<p; k++){
			A[j][k] = j + k;
			printf("%3.0f ", A[j][k]);
		}
		printf("\n");
	}

	printf("Matrix B:\n");
        for(j = 0; j<p; j++){
                for(k =0; k<q; k++){
                        B[j][k] = j - k;
                        printf("%3.0f ", B[j][k]);
                }
                printf("\n");
        }

	matmult(n,p,q,A,B,C);


	printf("Matrix C:\n");
	for(i = 0; i<n; i++){
		for(j = 0; j < q; j++){
			printf("%3.0f ", C[i][j]);
		}
		printf("\n");
	}
}
