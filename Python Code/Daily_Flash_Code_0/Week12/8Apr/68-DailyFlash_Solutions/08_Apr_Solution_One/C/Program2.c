#include<stdio.h>

void main(){

	int n = 0, m = 0;

	printf("Enter the rows of array : ");
	scanf("%d",&m);

	printf("Enter the Columns of array : ");
	scanf("%d",&n);

	int arr1[m][n];
	
	for(int i=0; i<m; i++){

		printf("Enter Elements for Row %d\n",i);	
		for(int j=0; j<n; j++)
			scanf("%d",&arr1[i][j]);
	}

	int max = arr1[0][0];
	int sum = 0;

	for(int i=0; i<m; i++){
			
		for(int j=0; j<n; j++)
			if(arr1[i][j]%2 == 0)	
				sum +=arr1[i][j];
			else if(max <  arr1[i][j])
				max = arr1[i][j];
	}

	printf("Product of Sum of Even Elements of Array and Max Odd Numbers = %d\n",max*sum);

}
