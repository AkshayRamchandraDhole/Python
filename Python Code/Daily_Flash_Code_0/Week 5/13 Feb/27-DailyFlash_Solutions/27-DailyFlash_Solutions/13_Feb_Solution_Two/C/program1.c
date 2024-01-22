
#include <stdio.h>

void main () {
	int n,temp, sum = 0, fact;
	printf("Enter Number: ");
	scanf("%d", &n);
	temp = n;
	while(n!=0){
		fact = 1;
		for(int i = 1; i<= n%10; i++){

			fact = fact * i;
		}
		sum = sum + fact;
		n = n / 10;
	}
	if(sum == temp){
		printf("Number is Strong Number\n");
	}
	else{
		printf("Number is not Strong Number\n");
	}
}
