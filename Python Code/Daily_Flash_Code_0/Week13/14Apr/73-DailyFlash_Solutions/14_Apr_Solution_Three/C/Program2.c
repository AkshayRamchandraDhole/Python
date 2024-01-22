#include<stdio.h>

void main(){

	int n = 0;

	printf("Enter order of Matrix\n");
	scanf("%d",&n);

	int matrix[n][n];
	for(int i=0;i<n;i++){

	printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Upper Triangular Matrix : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			if(i >= j)
				printf("%d\t",matrix[i][j]);
			else{

				matrix[i][j] = 0;
				printf("%d\t",matrix[i][j]);
			}
		}
		printf("\n");
	}

}
