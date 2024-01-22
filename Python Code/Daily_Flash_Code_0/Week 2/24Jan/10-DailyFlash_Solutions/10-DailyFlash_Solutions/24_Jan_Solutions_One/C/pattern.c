/*Program 4: Write a Program to Print following Pattern.
0
1 1
0 0 0 
1 1 1 1
0 0 0 0 0
*/


#include<stdio.h>

#define UPPERLIMIT 5
#define LOWERLIMIT 0
void main(){
	
	for(int i = LOWERLIMIT ; i<UPPERLIMIT ; i++){
		
		for(int j = LOWERLIMIT ; j<=i ; j++){
			
			i%2==0?printf("0"):printf("1");
		}	
		printf("\n");
	}	

}	
