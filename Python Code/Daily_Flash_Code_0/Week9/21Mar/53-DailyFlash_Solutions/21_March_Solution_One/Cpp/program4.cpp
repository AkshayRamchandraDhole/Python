#include<iostream>


int main(){
	

	for(int itr = 0; itr<4 ; itr++){

		
		for(int jtr = 0; jtr<=6-itr ; jtr++){
			
			jtr<itr?printf("\t"):printf("%d\t",jtr+(itr*itr));

		}	
		printf("\n");
	}	

}	
