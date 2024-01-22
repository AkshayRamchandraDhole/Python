#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	printf("Second succ = %d\n", num + 2);
	printf("Second pred = %d", num - 2);
}
