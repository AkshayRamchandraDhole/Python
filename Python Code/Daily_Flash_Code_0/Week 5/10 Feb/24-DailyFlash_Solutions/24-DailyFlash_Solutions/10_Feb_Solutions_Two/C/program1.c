
#include <stdio.h>

void main () {
	int n, sum = 0;
	printf("Enter Limit: ");
	scanf("%d", &n);
	for(int j = 1; j <= n; j++){
		sum = 0;
		for(int i = 1; i <= j/2; i++){
			if(j % i == 0){
				sum = sum + i;
			}
		}
		if(sum > j){
			printf("%d ",j);
		}
	}
	printf("\n");
}
