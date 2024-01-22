#include <stdio.h>

void main() {

	int len = 0;
	printf("Enter number of Elements\n");
	scanf("%d",&len);
	int arr[len],sum = 0;

	printf("Enter the Elements\n");
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	printf("Sum of Elements in array is %d\n",sum);
	printf("Average of Elements in array is %.2f\n",(float)sum/len);
}
