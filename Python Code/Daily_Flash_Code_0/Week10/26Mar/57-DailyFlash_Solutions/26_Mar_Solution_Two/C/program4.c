
#include <stdio.h>

void main () {
	
	int n, k = 0;
	printf("Enter Number : ");
	scanf("%d", &n);
	char st[] = "HELL";
	for(int i = 1; i <= n*2 - 1; i++){
		k = 0;
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				printf("%c\t", st[k++]);
			}
			else if(i > n && j > i - n) {
				
				printf("%c\t", st[k++]);
			}
		}
		printf("\n");
	}
}
