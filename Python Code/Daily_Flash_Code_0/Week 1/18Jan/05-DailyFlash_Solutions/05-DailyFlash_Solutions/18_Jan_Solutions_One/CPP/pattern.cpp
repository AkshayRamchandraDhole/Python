/*
Program 5 : Write a Program to print following Pattern.
Output :
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*/

#include<iostream>

#define lowerlimit 1
#define upperlimit 4

int main(){
	
	for(int outeritr = lowerlimit ; outeritr <= upperlimit ; outeritr++ ){

		for(int inneritr = lowerlimit ; inneritr <= upperlimit ; inneritr++ ){
			
			printf("0 ");
		}
		printf("\n");	
	}	
}	
