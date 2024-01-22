/*
Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
*/

#include<iostream>

#define lowerlimit 0
#define upperlimit 100

int main(){
	
	printf("First 50 even number\n");

	for(int itr = lowerlimit ; itr <= upperlimit ; itr++ ){
		
		if(itr%2==0)
			printf("%d ",itr);
	}	
		
}	
