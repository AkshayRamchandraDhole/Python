#include<stdio.h>

int main(){

	int rows = 0;

	printf("Enter no of rows : \t");
	scanf("%d",&rows);
	
	for(int i=0; i<rows; i++){	
		for(int j=0; j<(rows) + i; j++){


			
			if(i+j<rows-1){
			
				printf(" \t");
			}
			else
				printf("%d\t",j+1);
			
		}
		printf("\n");
	}

	return 0;
}