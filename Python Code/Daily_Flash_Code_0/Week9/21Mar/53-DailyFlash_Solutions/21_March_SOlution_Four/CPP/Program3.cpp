#include <stdio.h>

int main(){

	int sum = 0;
	for(int i = 0; i < 4; i++){

		sum = (i * i) + i;
		for(int j = 0; j < 7 - i; j++){

			if(j < i)
				printf(" \t");
			else{
				printf("%d\t",sum++);
			}
		}
		printf("\n");
	}
	return 0;
}
