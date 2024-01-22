#include<stdio.h>

int main(void) {
	int sum = 0;
	for(int i = 0; i < 10; i++) {
		sum += i + 1;
	}
	printf("Sum : %d", sum);
	return 0;
}
