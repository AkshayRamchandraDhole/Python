
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n, k = 0;
	printf("Enter Limit : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		k = n + 1;
		for(int j = n*2-1; j >= 1; j--){
			if(j >= i && j <= n){
				printf("%d\t",k);
				k++;
			}
			else if(j >= n+1 && j <= (n*2-i)){
				printf("%d\t",j+1);
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
