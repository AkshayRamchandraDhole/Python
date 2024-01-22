
#include <stdio.h>

void main () {
	int n;
	printf("Enter Limit : ");
	scanf("%d", &n);

	for(int i = 1; i < 2*n; i++){
		for(int j = 1; j < 2*n; j++){
			if(i == j || j == (2*n-i)){
				printf("X\t");
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
