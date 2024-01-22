
#include <stdio.h>
void exit(int);

void main() {

	int n;
	printf("Enter size : ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < (n-i-1)){
				printf("\t");
			}
			else
				printf("%d\t", (j != (n-i-1))?(j*(j+i)):(3));
		}
		printf("\n");
	}
}
