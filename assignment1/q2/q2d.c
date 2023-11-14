#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//initialising functions Sn1 and Sn2 to calculate the series and equation forms of Sn, respectively.

double Sn1(double n, double a, double r);
double Sn2(double n, double a, double r);

//Initialising a switch-case function within a for-loop to provide different values for n, a and r.

int main(){
        int i;
        double n, a, r, series, sum, diff;
        for(i = 1; i<=3; i++){

		//Dummy values are again provided for n, a and r. These are passed to Sn1 and Sn2 to generate our results. Then the difference between series and equation results are provided. These results are then printed for each case.

                switch(i){
                        case 1:
                                n = 1.0;
                                a = 1.0;
                                r = 0.1;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
                                series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
				diff = fabs(series - sum);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f\nThe difference between the two results is %f \n", series, sum, diff);
                                break;
                        case 2:
                                n = 2.0;
                                a = 2.0;
                                r = 0.2;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
                                series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
				diff = fabs(series - sum);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f\nThe difference between the two results is %f \n", series, sum, diff);
                                break;
                        case 3:
                                n = 3.0;
                                a = 3.0;
                                r = 0.3;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
                                series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
				diff = fabs(series - sum);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f\nThe difference between the two results is %f \n", series, sum, diff);
                                break;
                        default:
                                break;
                }
        }
	return 0;
}

//Constructing function to generate the series case, Sn1.

double Sn1(double n, double a, double r){
        int j;

	//Intialising Sn at 0. Extremely important for accuracy of results.

        double Sn = 0.0;

	//Looping from 0 to n to calculate Sn.

        for(j=0; j<=n; j++){
                Sn += a*pow(r,j);
        }

	//Returning Sn generated by loop.

        return Sn;
}

//Constructing function to generate the equation case, Sn2. C's built-in pow() function is used to calculate and return the value of Sn.

double Sn2(double n, double a, double r){
        return (a*(1 - pow(r, n+1)))/(1 - r);
}

