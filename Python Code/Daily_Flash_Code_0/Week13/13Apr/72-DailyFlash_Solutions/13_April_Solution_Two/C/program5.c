
#include <stdio.h>

void main () {

	int m = 3,n = 3;
	printf("Row and Column : \n");
	///scanf("%d%d", &m,&n);
	if(m!=n)
		return;
	int matrix[3][3];
	int max = 0, sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(matrix+i)+j));
		}
	}
	int x = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
	int y = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
	int z = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
	//int x = (matrix[0][0] * (((matrix[1][1]) * (matrix[2][2])) – ((matrix[1][2]) * (matrix[2][1]))));
	//int y = (matrix[0][1] * (matrix[1][0] * matrix[2][2] – matrix[1][2] * matrix[2][0]));
	//int z = (matrix[0][2] * (matrix[1][0] * matrix[2][1] – matrix[1][1] * matrix[2][0]));
	x = x - y + z;
	printf("Determinant : %d\n", x);
}

