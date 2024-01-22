
#include <stdio.h>
#include <stdlib.h>
void main () {
	
	int n;
	printf("Enter Length Of Array : ");
	scanf("%d", &n);

	int *arr1 = (int *) malloc(sizeof(int) * n);
	int *arr2 = (int *) malloc(sizeof(int) * n);

	printf("\nEnter Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		scanf("%d", (arr1+i));
	}
	printf("\nEnter Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		scanf("%d", (arr2+i));
	}
	for(int i = 0 ; i < n ; i++ ){
		arr1[i] = arr1[i] + arr2[i] - (arr2[i] = arr1[i]);
	}
	printf("Array first: \n");
	for(int i = 0 ; i < n ; i++ ){
		printf("%d ", arr1[i]);
	}
	printf("\nArray second: \n");
	for(int i = 0 ; i < n ; i++ ){
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
