#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num, rem, sum = 0, fact;
	while(temp > 0) {
		rem = temp % 10;
		fact = 1;
		for(int i = 1; i <= rem; i++) {
			fact = fact * i;
		}
		sum += fact;
		temp /= 10;
	}
	if(num == sum) {
		printf("Strong num");
	} else {
		printf("Not strong num");
	}

	return 0;
}
