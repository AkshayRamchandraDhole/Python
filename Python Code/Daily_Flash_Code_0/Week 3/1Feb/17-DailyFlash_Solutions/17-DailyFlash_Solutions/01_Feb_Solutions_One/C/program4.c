
#include<stdio.h>

void main(){
	
	for(int itr = 0; itr<4 ; itr++){
		
		for(int jtr = 0 ;jtr<4-itr ; jtr++){

			jtr%2==0?printf("+\t"):printf("=\t");
		}	
		printf("\n");
	}	
}	
