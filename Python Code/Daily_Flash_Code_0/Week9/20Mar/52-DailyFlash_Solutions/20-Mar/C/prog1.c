#include<stdio.h>
#include<math.h>
int main() {
	int l, sum, mul = 1;
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		mul *= pow(i, i);
	}
	printf("%d", mul);
}
