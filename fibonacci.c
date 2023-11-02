#include <stdio.h>
#include <stdlib.h>

void fib(int *Fn1, int *Fn2);

int main(void){
	int n, i, F0=0, F1=1;
	printf("Please enter a positive integer:\n");
	scanf("%d", &n);
	if(n<1){
		printf("%d is not a positive integer.\n", n);
		exit(1);
	}

	printf("The Fibonacci sequence is: \n");
	printf("%d, %d, ", F0, F1);

	for(i=2; i<=n; i++){
		fib(&F1, &F0);
		printf("%d, ", F1);
		
		if((i+1)%10 == 0) printf("\n");
	}

	return 0;
}

void fib(int* Fn1, int *Fn2){
	int Fn;
	Fn = *Fn1 + Fn2;
	*Fn2 = *Fn1;
	*Fn1 = Fn;
}
