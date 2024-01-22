
#include <stdio.h>
#include <stdlib.h>
void main() {
	
	int n, flag;
	printf("Enter Size : ");
	scanf("%d", &n);

	if(n < 0){
		exit(0);
	}
	flag = 1;
	for(int i = n; i >=1 ; i--) {
		for(int j = 0; j <= n-i; j++) {
			printf("%d\t",flag * flag);
			flag++;

		}
		printf("\n");
	}
}
