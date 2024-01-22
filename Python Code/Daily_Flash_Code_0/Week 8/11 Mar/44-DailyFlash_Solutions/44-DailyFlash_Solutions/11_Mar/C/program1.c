
#include <stdio.h>

void main() {

	int n;
	printf("Enter Limit : \n");
	scanf("%d", &n);
	printf("Automorphic Numbers : \n");
	for(int i = 1; i<=n; i++){
		if(i*i % 10 == i){
			printf("%d ",i);
		}
	}
	printf("\n");
}
