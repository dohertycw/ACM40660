#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Initialising functions Sn1 and Sn2 to calculate the series and equation forms of Sn respectively, which take given values of n, a and r from the switch-case.

double Sn1(double n, double a, double r);
double Sn2(double n, double a, double r);

//Initialising a switch-case function within a for-loop to provide different values for n, a and r.

int main(){
        int i;
        double n, a, r, series, sum;
        for(i = 1; i<=3; i++){
                switch(i){

			//Dummy values are again provided for n, a and r. The dummy values are then given to the Sn1 and Sn2 functions to acquire results for the series and equation cases.
			//These results are then printed for each case.
	
                        case 1:
                                n = 1.0;
                                a = 1.0;
                                r = 0.1;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				series = Sn1(n,a,r);
				sum = Sn2(n,a,r);
				printf("The series expansion of Sn gives %f. The equation of Sn gives %f \n", series, sum);
                                break;
                        case 2:
                                n = 2.0;
                                a = 2.0;
                                r = 0.2;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f \n", series, sum);
                                break;
                        case 3:
                                n = 3.0;
                                a = 3.0;
                                r = 0.3;
                                printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				series = Sn1(n,a,r);
                                sum = Sn2(n,a,r);
                                printf("The series expansion of Sn gives %f. The equation of Sn gives %f \n", series, sum);
                                break;
                        default:
                                break;
                }
        }
	return 0;
}

//Constructing function to generate the series case, Sn1. Values for n, a and r are provided by main.

double Sn1(double n, double a, double r){
	int j;

	//Initialising Sn at 0. I found that, if not done, while the series will be close to correct (especially at larger values of n), it won't be correct.

	double Sn = 0.0;

	//looping from 0 to n to calculate the value of Sn. This value is then added to the previous values of Sn until n values have been reached.	

	for(j=0; j<=n; j++){
		Sn += a*pow(r,j);
	}

	//Once n is reached, the value of Sn is returned.
	
	return Sn;
}

//Constructing function to generate the equation case, Sn2. Values for n, a and r are provided by main.

double Sn2(double n, double a, double r){

	//Using C's built-in pow function Sn is calculated and returned.

	return (a*(1 - pow(r, n+1)))/(1 - r);
}
