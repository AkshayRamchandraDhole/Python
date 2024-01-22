#include<iostream>


int main(){

	int num =1;
	for(int outeritr = 0 ; outeritr < 4 ; outeritr++){
		
		for(int inneritr = 0 ; inneritr <= outeritr ; inneritr++ ){
			
			printf("%d\t",num*num*num);
			num++;
		}	
		printf("\n");
	}	
}	
