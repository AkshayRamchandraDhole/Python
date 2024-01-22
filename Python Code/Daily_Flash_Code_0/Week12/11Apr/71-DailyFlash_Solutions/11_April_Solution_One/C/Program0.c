#include<stdio.h>

void main(){

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

	int min1 = arr1[0];
	int min2 = arr1[0];

	for(int i=0; i<n; i++){
			
		if(arr1[i] > min1){
			min2 = min1;
			min1 = arr1[i];
		}
		else if(arr1[i] > min2){
			min2 = arr1[i];
		}

		if(arr2[i] > min1){
			min2 = min1;
			min1 = arr2[i];
		}
		else if(arr2[i] > min2){
			min2 = arr2[i];
		}
	
	}

	printf("Second Largest Number %d\n",min2);

}
