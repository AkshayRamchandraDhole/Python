
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n, k = 0;
	printf("Enter Limit : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n*2 - 1; j++){
			if(j > n-i && j < n+i){
				printf("%d\t", ((j % 2 == 0)?1:0));
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
