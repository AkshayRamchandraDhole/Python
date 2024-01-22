
#include <stdio.h>

void main () {
	int n, k = 1;
	printf("Enter Number : ");
	scanf("%d" , &n);

	for(int i = n; i >= 1; i--){
		for(int j = 1; j < n+i; j++){
			if(j > n - i && (n-i+1) % 2 == 1){
				printf("%d\t",k);
				k++;
			}
			else if(j > n - i && (n-i+1) % 2 == 0){
				printf("%d\t",k);
				k--;
			}
			else
				printf("\t");
		}
		if((n-i + 1)%2 == 1) k--;
		else k++;
		printf("\n");
	}
}	
