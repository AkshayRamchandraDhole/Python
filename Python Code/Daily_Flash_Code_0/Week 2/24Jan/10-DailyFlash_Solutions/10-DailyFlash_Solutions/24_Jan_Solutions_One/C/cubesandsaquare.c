/*Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81
*/


#include<stdio.h>

void main(){
	
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);

	for(int itr = 1 ;itr <= num; itr++){
		
		if(itr%2!=0)
			printf("Cube of %d : %d and Square of %d:%d\n",itr,itr*itr*itr,itr,itr*itr);
	}	
}	
