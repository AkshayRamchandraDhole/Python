#include<stdio.h>

int main(void) {
	int a, b;
	printf("Enter num1 : ");
	scanf("%d", &a);
	printf("Enter num2 : ");
	scanf("%d", &b);
	printf("Quotient = %d\nRem = %d", a / b, a % b);
	return 0;
}
