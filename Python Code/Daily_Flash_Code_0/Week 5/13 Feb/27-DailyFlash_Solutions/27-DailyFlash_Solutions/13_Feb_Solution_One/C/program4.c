#include<stdio.h>


void main(){

	
	char ch = 'A';

	for(int itr = 0 ; itr<4 ; itr++){
		ch = 'A'+itr;
		for(int jtr = 0 ; jtr<4 ; jtr++){
			
			jtr<3-itr?printf("\t"):printf("%c%d\t",ch--,itr+jtr);

		}	
		printf("\n");
	}	
}	
