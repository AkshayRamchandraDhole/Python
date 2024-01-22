#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num, rem, sum = 0;
	while(temp > 0) {
		rem = temp % 10;
		sum += rem;
		temp /= 10;
	}
	printf("Sum = %d", sum);

	return 0;
}
