/*Program 4: Write a Program to Print following Pattern
*
* *
* * * 
* * * * 
*/
#include<iostream>


int main(){

	for(int outer = 1 ; outer <=4; outer++ ){

		for(int inner = 1 ; inner <=outer; inner++){
			
			printf("* ");
		}		
		printf("\n");
	}	
}	
