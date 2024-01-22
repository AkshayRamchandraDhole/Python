#include<stdio.h>

int main(void) {
	int num1, num2, rem = 1;
	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);
	while(1) {
		rem = num1 % num2;
		if(rem == 0)
			break;
		num1 = num2;
		num2 = rem;
	}
	printf("gcd : %d", num2);
	return 0;
}
