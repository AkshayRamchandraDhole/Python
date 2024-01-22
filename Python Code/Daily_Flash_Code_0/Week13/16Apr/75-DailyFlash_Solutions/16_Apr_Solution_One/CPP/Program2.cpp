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

	//Operation 1 2R1+3R2

	for(int i = 0;i < m; i++){

		matrix[0][i] = 2*(matrix[0][i]) + 3*(matrix[1][i]);
	}

	//Operation 2 2R2 - R3

	for(int i = 0;i < m; i++){

		matrix[1][i] = 2*(matrix[1][i]) - matrix[2][i];
	}


	//Operation 3 2R2 - R3

	for(int i = 0;i < m; i++){

		matrix[2][i] = 4*(matrix[2][i]);
	}


	for(int i = 0;i < n; i++){

		for(int j=0;j<m;j++){

			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
