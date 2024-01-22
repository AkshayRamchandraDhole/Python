
#include <stdio.h>

void main() {

	int n, a = 0, b = 1, c;
	c = a + b;
	printf("Enter Number : \n");
	scanf("%d", &n);
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j > n-i && j < n+i){
				printf("%d\t", a);
				a = b;
				b = c;
				c = a + b;
			}
			else
				printf("\t");
		}
		printf("\n");
	}
}
