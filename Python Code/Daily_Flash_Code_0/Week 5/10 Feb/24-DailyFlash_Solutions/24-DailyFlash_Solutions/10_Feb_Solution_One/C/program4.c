#include<stdio.h>


void main(){

	
	for(int itr=0 ; itr<4 ; itr ++){
		
		for(int jtr = 0 ; jtr < 4 ;jtr++){
			
			jtr<3-itr?printf("\t"):3-jtr==itr?printf("%d\t",3):printf("%d\t",jtr*(itr+jtr));
		}	
		printf("\n");
	}	

}	
