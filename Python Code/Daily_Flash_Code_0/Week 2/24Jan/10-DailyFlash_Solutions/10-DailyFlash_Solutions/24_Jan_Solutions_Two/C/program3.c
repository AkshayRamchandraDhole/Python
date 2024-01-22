
#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int n;
	printf("Enter Positive Number : ");
	scanf("%d", &n);

	if(n < 0){
		printf("Enter Positive Number\n");
		exit(0);
	}
	for(int i = 1; i <= n; i++) {
		if(i % 2 != 0 )
			printf("Cube of %d : %d and Square of %d : %d\n", i, i*i*i, i, i*i);
	}
}
