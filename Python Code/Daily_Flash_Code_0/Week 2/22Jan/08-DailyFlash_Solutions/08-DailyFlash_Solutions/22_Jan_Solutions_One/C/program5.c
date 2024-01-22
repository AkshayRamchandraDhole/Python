#include <stdio.h>
#include <stdlib.h>

void main () {

	int n;
	printf("Enter Size : \n");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("*  ");
		}
		printf("\n");
	}
	return ;
}
