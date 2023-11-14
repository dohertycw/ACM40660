#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Initialising functions to solve for the determinant of any 3x3 matrix and to give x = -1 when the case calls for it ( j < k ).

double det3(double A[3][3]);
double mat(int i, int k);

//Intiializing main to run a for-loop to generate the desired matrix and print it.

int main(){

        //Initializing variables to produce the desired matrix and its submatrices.

        int i, j, k;
        double den;
        double det4 = 0;
        double A[4][4];
        double M[3][3];
  
        //constructing for-loop to generate and print the initial matrix.

	printf("Given matrix: \n");
        for(i = 0; i <= 3; i++){
            for(j = 0; j <= 3; j++){
                den = (i+j + 1);
                A[i][j] = 1/den;
                printf("%f ", A[i][j]);
            }
            printf("\n");
        }
        printf("\n");

       //constructing for-loop to generate necessary (but not all) submatrices. The determinant of each necessary submatrix is then calculated
       //using the det3() function designed in q1b and multiplied by the necessary components of our matrix to solve for the determinant of the
       //matrix using Cramer's rule, as requested.

       for(k = 0; k <= 3; k++){
          for(i = 0; i<3; i++){
              for( j = 0; j<3; j++){
                                                                                                                                                                                                                                                                                                            //here we must have i + j + (3 + x), where x = -1 if j < k and x = 0 otherwise. This allows for the correct matrix elements.
              //In order to get this conditional statement to work we pass the conditions to our mat() function to get the desired results.

                   den = i + j + 3 + mat(j, k);
                   M[i][j] = 1/den;
              }
	   }

       //Calculating the determinant of the 4x4 matrix and printing it

           det4 += pow(-1, k)*A[0][k]*det3(M);
       }
       printf("The determinant of the given matrix is %f \n", det4);

return 0;
}

//Constructing function to return the determinant of any 3x3 matrix.

double det3(double A[3][3]){
       return A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) - A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) + A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
}

//Constructing function to return the conditional value for x contingent on j < k for the 4 cases necessary to calculate our submatrices.
                                                                                                                                                                                                                                                                                              double mat(int j, int k){
       int x;
       if(j < k){
          x = -1;
       }
       else{
          x = 0;
       }
       return x;
}

