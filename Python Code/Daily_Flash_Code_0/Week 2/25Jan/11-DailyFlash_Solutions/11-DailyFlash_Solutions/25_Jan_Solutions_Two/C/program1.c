
#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int n1, n2;
	printf("Enter Positive Numbers : \n");
	scanf("%d %d", &n1, &n2);

	if(n1 < 0 || n2 < 0 || n1 > n2){
		printf("Enter Positive Numbers or second Number should greater than first Number\n");
		exit(0);
	}
	for(int i = n1; i <= n2; i++) {
		if(i % 2 != 0 )
			printf("%d ", i);
	}
	printf("\n");
}
