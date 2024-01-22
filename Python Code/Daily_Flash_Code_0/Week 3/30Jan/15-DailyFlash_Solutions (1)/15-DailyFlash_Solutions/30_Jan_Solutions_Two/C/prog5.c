#include<stdio.h>

int main(void) {
	int r1, i1, r2, i2;
	printf("enter real and img (num1): ");
	scanf("%d %d", &r1, &i1);
	printf("enter real and img (num2): ");
	scanf("%d %d", &r2, &i2);
	printf("Add = %d + %di\n", r1 + r2, i1 + i2);
	return 0;
}
