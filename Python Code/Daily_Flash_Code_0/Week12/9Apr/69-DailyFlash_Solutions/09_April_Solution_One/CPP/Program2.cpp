#include<stdio.h>

int main(){

	int n = 0;

	printf("Enter the rows of array : ");
	scanf("%d",&n);

	int arr1[n][n];
	
	for(int i=0; i<n; i++){

		printf("Enter Elements for Row %d\n",i);	
		for(int j=0; j<n; j++)
			scanf("%d",&arr1[i][j]);
	}

	int flag = 0;

	for(int i=0; i<n; i++){
			
		for(int j=0; j<n; j++)
			if(i ==j && arr1[i][j] == 1)	
				flag = 1;
			else if(arr1[i][j] == 0)
				flag = 1;
			else
				flag = 0;
	}

	if(flag){

		printf("Identity Matrix\n");
	}

	return 0;
}
