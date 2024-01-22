#include <stdio.h>

void main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len];

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}
	
	int temp = arr[0];
	arr[0] = arr[len-1];
	arr[len-1] = temp;

	printf("Array Elements after Swapping\n");
	for(int i = 0; i < len; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
