
#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int n2;
	printf("Enter Positive Number : \n");
	scanf("%d",&n2);

	if(n2 < 0){
		printf("Enter Positive Number\n");
		exit(0);
	}
	for(int i = 1; i <= n2; i++) {
		if(i % 2 == 0 )
			printf("Cube of %d : %d and Square of %d : %d\n", i, i*i*i, i, i*i);
	}
}
