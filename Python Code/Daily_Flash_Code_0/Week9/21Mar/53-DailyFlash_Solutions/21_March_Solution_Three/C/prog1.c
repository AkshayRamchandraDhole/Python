#include<stdio.h>
#include<math.h>
int main() {
	int l, sum = 0;
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		sum += pow(i, i) * (i - 1);
	}
	printf("%d", sum);
}
