#include<stdio.h>

int main(void) {
	int a, b;
	printf("Enter num1 : ");
	scanf("%d", &a);
	printf("Enter num2 : ");
	scanf("%d", &b);
	b = (a + b) - (a = b);
	printf("num1 = %d\n", a);
	printf("num2 = %d\n", b);
	return 0;
}
