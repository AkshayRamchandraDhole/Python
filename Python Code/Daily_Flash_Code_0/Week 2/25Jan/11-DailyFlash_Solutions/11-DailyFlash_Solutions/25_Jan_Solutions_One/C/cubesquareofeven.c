/*
Program 3: Write a Program to print Cubes and Squares of all Even numbers
ranges between given input number.
Input: 10
Output:
Cube of 2 : 8 and Square of 2 : 4
Cube of 4 : 64 and Square of 4 : 16
.
.
Cube of 10 : 1000 and Square of 10 : 100

*/


#include<stdio.h>

void main(){
	
	int range;

	printf("Enter the number : ");
	scanf("%d",&range);

	for(int itr = 1; itr < range ; itr++){
		
		if(itr%2==0)
			printf("Cube of %d : %d and Square of %d : %d\n",itr,itr*itr*itr,itr,itr*itr);
	}	

}	
