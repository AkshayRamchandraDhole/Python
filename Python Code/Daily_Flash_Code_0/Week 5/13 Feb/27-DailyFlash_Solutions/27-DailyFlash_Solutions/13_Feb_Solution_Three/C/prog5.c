#include<stdio.h>

int main(void) {
	long num;
	int i = 0, odd = 0, even = 0;
	printf("Enter num : ");
	scanf("%ld", &num);
	while(num != 0) {
		if((num % 10) % 2 == 1)
			odd++;
		else 
			even++;
		num = num / 10;
	}
	printf("odd : %d\neven = %d", odd, even);
	return 0;
}
