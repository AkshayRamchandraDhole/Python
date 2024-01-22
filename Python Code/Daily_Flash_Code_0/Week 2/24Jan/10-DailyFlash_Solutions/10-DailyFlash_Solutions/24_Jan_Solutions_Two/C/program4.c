
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
		flag = (flag == 1)?0:1;
		for(int j = 1; j <= n-i+1; j++) {
			printf("%d ",flag);

		}
		printf("\n");
	}
}
