#include<stdio.h>

int main(void) {
	int inc, num = 1;
	printf("Enter inc : ");
	scanf("%d", &inc);
	for(int i = 0; i < 10; i++) {
		printf("%d  ", num);
		num += inc;
	}
	return 0;
}
