
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
	for(int i = n; i >=0 ; i--) {
		for(int j = i; j <= n; j++) {
			printf("%d\t",j);
			flag++;

		}
		printf("\n");
	}
}
