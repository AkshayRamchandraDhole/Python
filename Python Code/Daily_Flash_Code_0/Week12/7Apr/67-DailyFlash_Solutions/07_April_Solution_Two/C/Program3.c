#include<stdio.h>

void main(){

	int rows = 0;

	printf("Enter no of rows : \t");
	scanf("%d",&rows);
	
	for(int i=0; i<rows; i++){	
		for(int j=0; j<(rows) + i; j++){


			
			if(i+j<rows-1){
			
				printf(" \t");
			}
			else if(j%2 != 0)
				printf("1\t");
			else
				printf("0\t");
			
		}
		printf("\n");
	}

}
