
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

	int n, max1, max2;
	printf("Enter length of Array : ");
	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);
	printf("Array : \n");
	for(int i = 0; i < n ; i++){
		scanf("%d",(arr+i));
	}
	max1 = max2 = -999;
	for(int i = 0; i < n ; i++){
		if(max1 < arr[i]){
			max2 = max1;
			max1 = arr[i];		
		}
		else if(max2 < arr[i]){
			max2 = arr[i];
		}	
	}
	printf("%d\n",max2);

	
}
