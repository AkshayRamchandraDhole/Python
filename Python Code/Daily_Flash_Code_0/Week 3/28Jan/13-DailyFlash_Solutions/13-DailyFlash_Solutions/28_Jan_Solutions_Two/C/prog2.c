#include<stdio.h>

int main(void) {
	int num1, num2, fact;
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	for(int i = num1; i <= num2; i++) {
		fact = 1;
		for(int j = 1; j <= i; j++) {
			fact *= j;
		}
		printf("Fact of %d = %d\n", i, fact);
	}
	return 0;
}
