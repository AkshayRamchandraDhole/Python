
#include <stdio.h>

void main () {

	int m = 3,n = 3;
	//printf("Row and Column : \n");
	//scanf("%d%d", &m,&n);
	int matrix[3][3];
	printf("Enter Matrix : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(matrix+i)+j));
		}
	}
	for (int i = 0; i < n; i++){
		matrix[0][i] = 2 * matrix[0][i] + 3 * matrix[1][i]; 
		matrix[1][i] = 2 * matrix[1][i] - matrix[2][i]; 
		matrix[2][i] = 4 * matrix[2][i]; 
	}
	printf("Matrix : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

