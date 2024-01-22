

#include<iostream>

int main(){
	

	int num = 7;

	for(int  itr = 0; itr<4 ; itr++){

		
		num = 7 - itr;
		for(int jtr = 0 ;jtr<=itr ; jtr++){
			
			printf("%d\t",num--);
		}	
		printf("\n");
		
	}	
}	
