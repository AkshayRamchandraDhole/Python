
#include <stdio.h>

void main () {
	
	int n, k = 1;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				printf("%d\t", k++);
			}
			else if(i > n && j > i - n) {
				k--;
				printf("%d\t", k);
			}
		}
		if(i == n)
			k--;
		printf("\n");
	}
}
