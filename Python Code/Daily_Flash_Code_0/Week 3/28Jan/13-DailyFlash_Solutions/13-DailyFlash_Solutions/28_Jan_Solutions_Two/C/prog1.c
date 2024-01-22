#include<stdio.h>

int main(void) {
	int num, sum = 0;
	printf("Enter num : ");
	scanf("%d", &num);
	for(int i = 1; i <= num / 2; i++) {
		if(num % i == 0)
			sum += i;
	}
	if(sum == num && num > 0)
		printf("Perfect.");
	else 
		printf("Not perfect.");
	return 0;
}
