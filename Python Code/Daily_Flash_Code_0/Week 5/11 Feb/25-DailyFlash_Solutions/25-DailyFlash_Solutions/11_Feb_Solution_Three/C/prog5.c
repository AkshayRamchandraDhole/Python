#include<stdio.h>

int main(void) {
	long num;
	int i = 0, even = 0;
	printf("Enter num : ");
	scanf("%ld", &num);
	while(num != 0) {
		if((num % 10) % 2 == 0)
			even++;
		num = num / 10;
	}
	printf("No of even digits : %d", even);
	return 0;
}
