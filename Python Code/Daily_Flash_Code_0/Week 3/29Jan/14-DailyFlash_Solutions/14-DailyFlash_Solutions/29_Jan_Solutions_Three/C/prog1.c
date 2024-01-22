#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	for(int i = 0; i < 10; i++) {
		printf("%d * %d = %d\n", num, 10 - i, num * (10 - i));
	}
}
