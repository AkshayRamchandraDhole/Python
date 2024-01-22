#include<stdio.h>

int main(void) {
	int num, sum;
	printf("Enter num : ");
	scanf("%d", &num);
	for(int i = 2; i <= num; i++) {
		sum = 0;
		for(int j = 1; j <= i/2 ; j++) {
			if(i % j == 0)
				sum += j;
		}
		if(sum == i)
			printf("%d ", i);
	}
	return 0;
}
