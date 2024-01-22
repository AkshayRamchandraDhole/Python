
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
		k[i] = i[k]-arr[i];
	}
	printf("Subtraction of Elements: \n");
	for(int i = 0; i < n ; i++){
		if(k[i] < 0)
			k[i] = -1*k[i];
		printf("%d ",k[i]);
	}
	printf("\n");

	
}
