
#include <stdio.h>
#include <stdlib.h>
void main() {
	int n;
	printf("Enter length  of Array : ");
	scanf("%d", &n);
	int *arr = (int *)malloc(4*n);
	scanf("%d", &arr[0]);
	for(int i =  1; i < n ; i++){
		scanf("%d", &arr[i]);
	}
	printf("before : \n");
	for(int i =  0; i < n ; i++){
		printf("%d ",arr[i]);
	}
	printf("\nAfter:\n");

	for(int i =  0; i < n/2 ; i++){
		arr[n-1-i] = arr[i] + arr[n-1-i] - (arr[i] = arr[n-1-i]);
	}

	for(int i =  0; i < n ; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
