/*Program 5: Write a Program that accepts an integer from user and prints all of
its perfect divisors.
Input: 24
Output: Perfect Divisors of 24 are: 2 3 4 6 8 12

*/

#include<iostream>

int main(){
	
	int num;
	printf("Enter the number ");
	scanf("%d",&num);

	for(int itr = 2 ; itr<=num/2 ; itr++){
		
		if( num%itr == 0)
			printf("%d ",itr);

	}	
}	
