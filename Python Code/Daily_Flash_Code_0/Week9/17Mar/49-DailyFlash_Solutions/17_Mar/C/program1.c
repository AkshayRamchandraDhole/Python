
#include <stdio.h>

void main () {
	int n,mul;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	mul = 1;
	for(int i = 1; i<= n; i++){
		mul = mul*(i*i);
	}
	printf("%d\n",mul);
}
