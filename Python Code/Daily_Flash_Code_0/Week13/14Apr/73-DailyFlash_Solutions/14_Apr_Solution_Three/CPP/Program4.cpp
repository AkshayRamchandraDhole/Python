#include<stdio.h>
#include<math.h>

int main(){

	int n = 0,flag = 0;

	printf("Enter order of Matrix\n");
	scanf("%d",&n);

	int matrix[n][n];
	int matrix1[n][n];

	printf("Enter Elements for Matrix 1");
	for(int i=0;i<n;i++){

		printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Enter Elements for Matrix 2");
	for(int i=0;i<n;i++){

		printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix1[i][j]);
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			if(matrix[i][j] == matrix1[i][j])

				flag = 1;
			else{

				flag = 0;
				break;
			}
		}
	}
	
	flag ? 	printf("Matrixes are Equal: \n") :  printf("Matrixes are UnEqual: \n") ;

	return 0;
}
