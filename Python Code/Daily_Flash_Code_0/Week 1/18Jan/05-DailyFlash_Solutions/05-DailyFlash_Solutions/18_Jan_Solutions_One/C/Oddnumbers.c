/*
Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99

*/

#include<stdio.h>

#define lowerlimit 0
#define upperlimit 100

void main(){
	
	printf("First 50 odd numbers \n");

	for(int itr = lowerlimit ; itr <= upperlimit; itr++){
		
		if(itr%2!=0)
			printf("%d  ",itr);

	}	
}	
