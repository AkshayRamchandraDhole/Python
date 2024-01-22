
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n;
	printf("Enter Hrs : ");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	printf("%d seconds\n", n * 60 * 60);
}
