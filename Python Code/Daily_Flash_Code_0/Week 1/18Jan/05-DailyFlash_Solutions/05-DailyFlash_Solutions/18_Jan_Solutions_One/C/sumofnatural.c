/*
Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55

*/


#include<stdio.h>

#define lowerlimit 1
#define upperlimit 10

void main(){
	
	printf("Sum of first 10 natural number\n");
	int sum = 0;
	for(int itr = lowerlimit ; itr <= upperlimit ; itr++){
		
		sum = sum + itr ;
	}
	
	printf("%d",sum);	
}	
