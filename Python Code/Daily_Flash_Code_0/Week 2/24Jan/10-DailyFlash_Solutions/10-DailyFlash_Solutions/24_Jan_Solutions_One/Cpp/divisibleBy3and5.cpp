/*Program 1: Write a Program to print all the numbers ranging between 1 to 100
that are divisible by 3 or 5.
Output: 3 5 6 9 10 . . .. 99 100.*/


#include<iostream>

int main(){
	
	for(int itr = 1 ; itr <=100 ; itr++){
		
		if(itr%3 == 0  || itr%5 ==0)
			printf("%d ",itr);
	}	
}	
