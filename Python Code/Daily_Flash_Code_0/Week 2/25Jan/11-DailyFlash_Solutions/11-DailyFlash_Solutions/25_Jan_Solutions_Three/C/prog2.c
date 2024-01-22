#include<stdio.h>

int main(void) {
	int num1, num2;
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("num1 : %d\nnum2 : %d", num1, num2);
	return 0;
}
