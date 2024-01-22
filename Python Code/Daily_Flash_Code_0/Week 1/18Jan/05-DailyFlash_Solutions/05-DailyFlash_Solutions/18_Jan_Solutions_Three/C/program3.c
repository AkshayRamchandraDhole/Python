
#include <stdio.h>

void main () {
	int k = 1, m = 1;
	
	while(k <= 50){
		if(m % 2 == 1)
			printf("%d ", m);
	
		m+=2;
		k++;
	}
	printf("\n");
}
