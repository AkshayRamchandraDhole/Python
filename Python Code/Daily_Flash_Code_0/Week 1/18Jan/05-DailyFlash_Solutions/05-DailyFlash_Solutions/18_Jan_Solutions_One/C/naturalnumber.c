/*
Program 1: Write a program to print First 10 Natural Numbers.
Output: 1 2 3 4 5 6 8 9 10

*/

#include<stdio.h>

#define Lowerlimit 1
#define Upperlimit 10

void main(){
	
	printf("First 10 Natural Numbers");
	for(int itr = Lowerlimit ; itr <= Upperlimit ; itr++ ){
		
		printf("%d ",itr);
	}	


}	
