
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	if(n <= 0)
		exit(0);

	for(int i = 1; i <= n*n; i= i + n){
		printf("%d ", i);
	}
	printf("\n");
}
