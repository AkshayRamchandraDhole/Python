#include <stdio.h>

void main(){

	for(int i = 0; i < 7; i++){

		for(int j = 0; j <= i; j++){

			if(i+j <= 6){

				if(i < 4)
					printf("%c\t",(i+65));
				else{
					printf("%c\t",(7-i+64));
				}
			}
			else if(j < 4){	
				printf(" \t");
			}
		}
		printf("\n");
	}
	return 0;
}
