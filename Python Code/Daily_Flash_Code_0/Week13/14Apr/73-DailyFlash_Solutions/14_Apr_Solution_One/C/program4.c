
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n, k = 0;
	char c = 64;
	printf("Enter Limit : ");
	scanf("%d", &n);
	for(int i = 1; i <= 2*n-1; i++){
		for(int j = n*2-1; j >= 1; j--){
			if(j > (n-i) && j < (n+i) && i <= n){
				printf("%c\t", (i%2 == 1)?i+48:c);
			}
			else if(i>n && j > (i-n) && j < (2*n-(i-n))){
				printf("%c\t", (i%2==1)?(n-(i-n) + 48):c);
			}
			else {
				printf("\t");
			}	
			
		}
		if(i<=n && i % 2 == 1)
			c++;
		else if(i>n)
			c--;
		printf("\n");
	}
}
