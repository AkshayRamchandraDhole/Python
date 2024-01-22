
#include <stdio.h>

void main () {
	int n, k = 1, inc = 0;
	char ch = 'A';
	printf("Enter Number : ");
	scanf("%d" , &n);
	k = 0;
	for(int i = n; i >= 1; i--){
		k = inc;
		for(int j = 1; j < n+i; j++){
			if(j > n - i){
				printf("%c%d\t",ch,k);
				ch++;
				k++;
			}
			else
				printf("\t");
		}
		inc += 2;
		printf("\n");
	}
}	
