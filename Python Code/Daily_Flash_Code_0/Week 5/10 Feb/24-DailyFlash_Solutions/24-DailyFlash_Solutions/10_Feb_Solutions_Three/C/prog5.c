#include<stdio.h>

int main(void) {
	long num;
	int i = 0;
	printf("Enter num : ");
	scanf("%ld", &num);
	while(num != 0) {
		num = num / 10;
		i++;
	}
	printf("No of digits : %d", i);
	return 0;
}
