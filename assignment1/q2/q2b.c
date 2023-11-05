#include <stdio.h>

//Initialising a switch-case function to provide three different sets of values for n, a and r.

int main(){
	int i;
	double n, a, r;

	//Initialising for-loop from 1-3.

	for(i = 1; i<=3; i++){

	//The switch occurs with different values of i, which are provided by the for-loop.		

		switch(i){

			//Dummy values have been provided for each case and are printed, just to show functionality.

			case 1:
				n = 1.0;
				a = 1.0;
				r = 1.0;
				printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				break;
			case 2:
				n = 2.0;
				a = 2.0;
				r = 2.0;
				printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				break;
			case 3:
				n = 3.0;
				a = 3.0;
				r = 3.0;
				printf("Case %d: \n n = %f \n a = %f \n r = %f \n", i, n, a, r);
				break;

			//As in this case there is no default case, default has been left blank.

			default:
				break;
		}
	}
	return 0;
}
