#include<stdio.h>

int main(){

	int n = 0, m = 0;

	printf("Enter the rows of array : ");
	scanf("%d",&m);

	printf("Enter the rows of array : ");
	scanf("%d",&n);

	int arr1[m][n];
	
	for(int i=0; i<m; i++){

		printf("Enter Elements for Row %d\n",i);	
		for(int j=0; j<n; j++)
			scanf("%d",&arr1[i][j]);
	}

	printf("Entered Elements are\n");
	for(int i=0; i<m; i++){
			
		for(int j=0; j<n; j++)
			if(i == j)	
				printf("%d\n",arr1[i][j]);
		printf("\n");
	}

	return 0;
}
