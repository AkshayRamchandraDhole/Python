#include<stdio.h>

int main() {
	int l, sum, mul = 1;
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		sum = 0;
		for(int j = 1; j <= i; j++) {
			sum += j;
		}
		mul *= sum;
	}
	printf("%d", mul);
}