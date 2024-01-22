#include<stdio.h>

int main() {
	int len, mul = 1;
	printf("Enter len : ");
	scanf("%d", &len);
	for(int i = 1; i <= len; i++) {
		mul *=  i;
	}
	printf("%d", mul);
}
