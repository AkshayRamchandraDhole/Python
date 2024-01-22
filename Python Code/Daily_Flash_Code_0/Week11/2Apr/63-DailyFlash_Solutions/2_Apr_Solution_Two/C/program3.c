
#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int p, int r) {

	int ind;
	for(int i = p; i < r; i++){
		ind = i;
		for(int j = i; j <= r; j++){
			if(arr[ind] < arr[j]){
				ind = j;
			}
		}
		arr[ind] = arr[ind] + arr[i] - (arr[i] = arr[ind]);
	}
}

void main () {
	
	int n;
	printf("Enter Length Of Array : ");
	scanf("%d", &n);

	int *arr = (int *) malloc(sizeof(int) * n);

	for(int i = 0 ; i < n ; i++ ){
		scanf("%d", (arr+i));
	}

	printf("Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		printf("%d ", *(arr+i));
	}
	printf("\n");
	merge(arr, 0, n-1);

	printf("Sorted Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
