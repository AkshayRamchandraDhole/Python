/*Program 2: Write a Program to Print following Pattern
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>


int main(){

	int num =1;
	for(int outer = 1 ; outer <=4; outer++ ){

		for(int inner = 1 ; inner <=outer; inner++){
			
			printf("%d\t",num++);
		}		
		printf("\n");
	}	
}	
