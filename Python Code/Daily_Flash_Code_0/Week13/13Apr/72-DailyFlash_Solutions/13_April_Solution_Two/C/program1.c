
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

	int n;
	printf("Enter length of Array : ");
	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);
	int *k = (int *)malloc(sizeof(int)*n);
	printf("Array 1 : \n");
	for(int i = 0; i < n ; i++){
		scanf("%d",(arr+i));
	}
	printf("Array 2 : \n");
	for(int i = 0; i < n ; i++){
		scanf("%d",(k+i));
	}
	arr = (int *)realloc(arr,2*n);
	for(int i = n; i < 2*n ; i++){
		arr[i] = k[i-n];
	}
	printf("Array After concatenation : \n");
	for(int i = 0; i < 2*n ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	
}
