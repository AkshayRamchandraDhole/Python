
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int n, k = 0;
	printf("Enter Limit : ");
	scanf("%d", &n);
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = 1; j <= n; j++){
			if(i <= n && j <=i ){
				printf("%c\t",(i+64));
			}
			else if(i>n && j >(i-n)) {
				printf("%c\t",(64+(n-(i-n))));
			}
		}
		printf("\n");
	}
}
