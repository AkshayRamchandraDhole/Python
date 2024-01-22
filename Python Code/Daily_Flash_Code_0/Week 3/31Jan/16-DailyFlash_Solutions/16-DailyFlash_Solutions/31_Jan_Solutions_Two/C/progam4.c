
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, k;
	printf("Enter Size : ");
	scanf("%d" , &n);

	if (n < 0)
		exit(0);

	k = n * 2 - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("%d\t", k--);
		}
		k = n * 2 - 1 - i;
		printf("\n");
	}
}
