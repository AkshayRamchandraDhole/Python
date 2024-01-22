#include<stdio.h>

int main(){

	int m = 0,n = 0;

	printf("Enter No of Rows of Matrix\n");
	scanf("%d",&m);

	printf("Enter No of Columns of Matrix\n");
	scanf("%d",&n);

	int matrix[m][n];
	int rows[m];
	int cols[n];

	int sum = 0;

	for(int i = 0; i < m; i++){

	printf("Enter array elemets for row %d : \n",i);
		for(int j = 0; j < n; j++){

			scanf("%d",&matrix[i][j]);
		}
	}

	//Operation 1 2C1+C2

	for(int i = 0;i < m; i++){

		matrix[i][0] = 2*(matrix[i][0]) + (matrix[i][1]);
	}

	//Operation 2 3C2 - C1

	for(int i = 0;i < m; i++){

		matrix[i][1] = 3*(matrix[i][1]) - matrix[i][0];
	}


	//Operation 3 3C3

	for(int i = 0;i < m; i++){

		matrix[i][2] = 3*(matrix[i][2]);
	}


	for(int i = 0;i < n; i++){

		for(int j=0;j<m;j++){

			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
