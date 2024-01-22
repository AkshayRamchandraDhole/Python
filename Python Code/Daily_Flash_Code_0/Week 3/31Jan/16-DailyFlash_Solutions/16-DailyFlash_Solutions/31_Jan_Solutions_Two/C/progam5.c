
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n, j, sum = 0;
	printf("Enter Limit : ");
	scanf("%d" , &n);

	if (n < 0)
		exit(0);

	for(int i = 1; i <= n; i++){
		sum = 0;
		for(j = 1; j <= i/2; j++){
			
			if(i % j == 0){
				sum = sum + j;
			}
		}
		if(sum == i)
			printf("%d ", i);
	}
	printf("\n");
}
