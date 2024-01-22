
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	scanf("%d", &n);
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j > n-i && j < n+i)
				printf("%c\t", (64+j-(n-i)));
			else
				printf("\t");
		}
		printf("\n");
	}
}
