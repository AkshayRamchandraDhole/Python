#include<stdio.h>
#include<math.h>

int main(){

	int n = 3;

	int matrix[n][n];
	for(int i=0;i<n;i++){

	printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix[i][j]);
		}
	}

int x=(matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]));
int y=(matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]));
int z=(matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]));

int det = x-y+z;

	printf("Determinant of  Matrix : %d\n",det);

	return 0;
}
