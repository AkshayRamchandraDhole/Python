#include <stdio.h>

void main(){

	char str[20] = "HELLO WORLD";
	for(int i = 0; i < 7; i++){

		for(int j = 0; j <= i; j++){

			if(i+j <= 6){

				printf("%c\t",str[j]);
			}
			else if(j < 4){	
				printf(" \t");
			}
		}
		printf("\n");
	}
}
