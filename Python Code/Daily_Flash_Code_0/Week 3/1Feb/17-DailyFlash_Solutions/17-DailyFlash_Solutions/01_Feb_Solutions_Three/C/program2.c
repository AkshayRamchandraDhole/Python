
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n;
	printf("Enter Limit : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	for(int i = n; i >= 0; i--){
		if(i % 2 != 1)
			printf("%d ", i);
	}
	printf("\n");
}
