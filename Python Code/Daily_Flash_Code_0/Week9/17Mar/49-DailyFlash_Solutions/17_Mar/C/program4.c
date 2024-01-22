
#include <stdio.h>

void main () {
	int n;
	printf("Enter Number : ");
	scanf("%d" , &n);

	for(int i = n; i >= 1; i--){
		for(int j = 1; j < n+i; j++){
			if(j > n - i){
				printf("*\t");
			}
			else
				printf("\t");
		}
		printf("\n");
	}
}	
