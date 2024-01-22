
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n;
	printf("Enter Size : ");
	scanf("%d" , &n);

	if (n < 0)
		exit(0);

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i+1; j++){
			printf("%c\t", 64 + i);
		}
		printf("\n");
	}
}
