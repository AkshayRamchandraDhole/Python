#include<stdio.h>

void main(){

	int row = 0,col = 0;

	printf("Enter the row and col : ");
	scanf("%d%d",&row,&col);

	int matrix[row][col],tpmatrix[col][row];
	printf("Enter array elemets : \n");
	for(int i=0;i<row;i++){
	
		for(int j=0;j<col;j++){
		
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Transpose Matrix : \n");
	for(int i=0;i<col;i++)){
		for(int j=0;j<row;j++){

			tpmatrix[i][j] = matrix[j][i];
			printf("%d ",tpmatrix[i][j]);
		}
	printf("\n");
	}
	
}
