/*
Program 4: Write a Program to Print following Pattern.
a
A A 
a a a 
A A A A
a a a a a
*/


#include<iostream>

int main(){

	
	for(int outerItr = 0 ; outerItr < 5 ; outerItr++){

		for(int innerItr = 0 ; innerItr <= outerItr ; innerItr++){

			outerItr%2==0?printf("a "):printf("A ");
		}	
		printf("\n");


	}	
}	
