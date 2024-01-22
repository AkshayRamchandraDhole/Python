#include<iostream>


int main(){

	
	char ch = 'A';

	for(int itr =0; itr<=4 ; itr++){

		for(int jtr = 5-itr ; jtr>0;jtr--){
			
			printf("%c\t",ch+itr);
		}	
		printf("\n");

	}	
}	
