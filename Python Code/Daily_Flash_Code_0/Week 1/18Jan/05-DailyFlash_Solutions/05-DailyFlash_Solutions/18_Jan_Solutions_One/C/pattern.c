/*
Program 5 : Write a Program to print following Pattern.
Output :
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*/

#include<stdio.h>

#define lowerlimit 1
#define upperlimit 4

void main(){
	
	for(int outeritr = lowerlimit ; outeritr <= upperlimit ; outeritr++ ){

		for(int inneritr = lowerlimit ; inneritr <= upperlimit ; inneritr++ ){
			
			printf("0 ");
		}
		printf("\n");	
	}	
}	
