#include<stdio.h>

void main(){

	int row,col;

	char str[100] = {'\0'};
	printf("Enter no of columns : \t");
	scanf("%d",&col);
	getchar();

	printf("Enter a String\n");
	fgets(str,sizeof(str),stdin);

	row=(2*col)-1;

	for(int i=0; i<row; i++){	
		for(int j=0; j<col; j++){

			if(i+j>=row/2 && i-j<=row/2){
			
				printf("%c\t",str[j]);
			}
			else
				printf(" \t");
			
		}
		printf("\n");
	}

}
