
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n, k = 0;
	printf("Enter Limit : ");
	scanf("%d", &n);
	for(int i = 1; i <= 2*n-1; i++){
		for(int j = n*2-1; j >= 1; j--){
			if(j > (n-i) && j < (n+i) && i <= n){
				printf("%d\t", i);
			}
			else if(i>n && j > (i-n) && j < (2*n-(i-n))){
				printf("%d\t", n-(i-n));
			}
			else {
				printf("\t");
			}	
			
		}
		printf("\n");
	}
}
