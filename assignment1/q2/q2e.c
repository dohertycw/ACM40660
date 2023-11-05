#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Initialising functions Sn1 and Sn2 to calculate the series and equation forms of Sn, respectively.

double Sn1(double n, double a, double r);
double Sn2(double n, double a, double r);

//Intialising a switch-case function within a for-loop to provide different values for n, a and r.

int main(void){
        int i;
        double n, a, r, series, sum, diff;
        for(i = 1; i<=3; i++){

		//Here the requested values for n, a and r are passed to Sn1 and Sn2 to generate results. The difference between these results is calculated, then all results are printed.

                switch(i){
                        case 1:
                                n = 10000.0;
                                a = 2.0;
                                r = 0.01;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
                                series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
                                diff = fabs(series - sum);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f\nThe difference between the two results is %f \n", series, sum, diff);
                                break;
                        case 2:
                                n = 500.0;
                                a = 0.01;
                                r = 1.1;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
                                series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
                                diff = fabs(series - sum);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f\nThe difference between the two results is %f \n", series, sum, diff);
                                break;
                        case 3:
                                n = 100.0;
                                a = 0.0001;
                                r = 2.0;
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

//Consructing function to generate the series case, Sn1.

double Sn1(double n, double a, double r){
        int j;
        double Sn = 0.0;

	//Looping from 0 to n to calculate Sn.

        for(j=0; j<=n; j++){
                Sn += a*pow(r,j);
        }

	//Returning Sn.

        return Sn;
}

//Constructing function to generate the equation case, Sn2.

double Sn2(double n, double a, double r){
        return (a*(1 - pow(r, n+1)))/(1 - r);
}

