#include<stdio.h>
#include<math.h>
int main() {
	int arr[] = {1,2 ,3 , 4, 5, 6,7 ,8 ,9};
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
}
