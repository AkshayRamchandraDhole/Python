
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	scanf("%d", &n);
	if(n*n % 10 == n){
		printf("Number is Automorphic Number\n");
	}
	else{
		printf("Number is not Automorphic Number\n");
	}
}
