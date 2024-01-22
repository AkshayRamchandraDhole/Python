#include<stdio.h>

int main(void) {
	int num1, num2;
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	for(int i = num1; i <= num2; i++) {
		if(i % 2 == 0)
			printf("Sqr of %d : %d\ncube of %d = %d\n\n", i, i * i, i, i * i * i);
	}
	return 0;
}
