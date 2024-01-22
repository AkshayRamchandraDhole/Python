/*Program 2: Write a Program to all the numbers ranging between 1 to 100 that
are divisible by 4 and 7.
Output: 28 56 84*/


#include<stdio.h>

void main(){
	
	for(int itr = 1 ; itr <=100 ; itr++){
		
		if(itr%4 == 0  && itr%7 ==0)
			printf("%d ",itr);
	}	
}	
