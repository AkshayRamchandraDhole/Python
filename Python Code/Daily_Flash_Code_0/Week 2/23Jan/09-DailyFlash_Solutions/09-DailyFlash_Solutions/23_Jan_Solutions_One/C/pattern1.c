/*
Program 1: Write a Program to Print following Pattern
1
2 2 
3 3 3
4 4 4 4
*/

#include<stdio.h>


void main(){

	for(int outer = 1 ; outer <=4; outer++ ){

		for(int inner = 1 ; inner <=outer; inner++){
			
			printf("%d",outer);
		}		
		printf("\n");
	}	
}	
