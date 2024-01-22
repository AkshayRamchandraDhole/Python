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

	for(int i = 0; i < len/2; i++){	
		int temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}

	printf("Array Elements after Swapping\n");
	for(int i = 0; i < len; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
