
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
		matrix[i][2] = 2 * matrix[i][2] + matrix[i][1]; 
		matrix[i][1] = 3 * matrix[i][1] - matrix[i][0]; 
		matrix[i][2] = 3 * matrix[i][2]; 
	}
	printf("Matrix : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

