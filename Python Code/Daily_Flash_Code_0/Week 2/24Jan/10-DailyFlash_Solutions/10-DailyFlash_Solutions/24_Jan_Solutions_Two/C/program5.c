
#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int n, flag = 0;
	printf("Enter Positive Number : ");
	scanf("%d", &n);

	if(n < 0){
		printf("Enter Positive Number\n");
		exit(0);
	}
	
	printf("perfect Divisors of %d are : ", n);
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0 ) { 
			flag = 1;
			printf("%d ", i);
		}
	}
	if(flag == 0)
		printf("Prime Number");
	printf("\n");
}
