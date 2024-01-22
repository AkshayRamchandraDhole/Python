
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

void main () {
	int n,t;
	float sum = 0,var = 0;
	printf("Total Number : ");
	scanf("%d", &t);
	int *arr = (int *)malloc(4*t);

	printf("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		scanf("%d", &n);
		arr[i] = n;
		sum = sum + n;
	}
	sum = sum / t;
	for(int i = 0; i< t; i++){
		var = var + pow(arr[i] - (int)(sum),2);	
	}
	printf("Variance = %f\n", var /t);
}
