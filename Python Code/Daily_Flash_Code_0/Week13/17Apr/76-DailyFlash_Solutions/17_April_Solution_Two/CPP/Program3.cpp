#include<stdio.h>

int main(){

	int row;
	printf("Enter the rows : ");
	scanf("%d",&row);

	for(int olc = 0; olc < row; olc++){
	
		for(int ilc=0; ilc < row; ilc++){
		
			if(olc == ilc || olc+ilc == row-1){
				printf("X\t");
			}
			else
				printf("\t");
		}
		printf("\n");
	}
	return 0;
}
