#include<stdio.h>

void main(){

	int n;

	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];

	printf("Enter Array 1 Elements\n");
	for(int i=0; i<n; i++)
		scanf("%d",&arr1[i]);

	printf("Enter Array 2 Elements\n");
	for(int i=0; i<n; i++)
		scanf("%d",&arr2[i]);

	for(int i=0; i<n; i++){
		int temp = arr1[i];
		arr1[i]	= arr2[i];
		arr2[i] = temp;
	}	


	printf("After Swapping Elements in First Array and Second Array are\n");

	printf("\t\tFirst\t\tSecond\n");	
	for(int i=0; i<n; i++){
		printf("At Index %d = \t%d\t\t%d\n",i,arr1[i],arr2[i]);
	}

}
