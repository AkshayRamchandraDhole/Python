#include<stdio.h>

int main(){

	int n = 0;

	printf("Enter Number of Elements : ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	
	printf("Enter For array 1\n");
	for(int i=0; i<n; i++){

		scanf("%d",&arr1[i]);
	}

	printf("Enter For array 2\n");
	for(int i=0; i<n; i++){

		scanf("%d",&arr2[i]);
	}

	printf("Subtraction of Elements\n");
	for(int i=0; i<m; i++){
			
		int sub = arr1[i]-arr2[i];
			if( sub < 0)	
				sub*=-1;
			printf("%d\t",sub);
	}

	printf("\n");

	return 0;
}
