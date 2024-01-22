
#include<stdio.h>

void main(){

	int num = 1;
	for(int outerItr = 0 ; outerItr < 4 ; outerItr++){

		for(int innerItr = 0 ; innerItr <= outerItr ; innerItr++){
			printf("%d\t",num*num);
			num=num+1;
		}	
		printf("\n");


	}	
}	   
