
#include <stdio.h>
#include <stdlib.h>

int main() {

	float n;
	printf("Rupees : ");
	scanf("%f", &n);
	
	if(n <= 0)
		exit(0);

	printf("Dollars : %f\n", n * 0.014);
}
