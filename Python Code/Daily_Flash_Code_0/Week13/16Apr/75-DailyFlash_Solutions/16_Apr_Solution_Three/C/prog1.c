#include<stdio.h>
#include<stdlib.h>

int main() {
	int l;
	printf("Enter len: ");
	scanf("%d", &l);
	int arr1[l];
	int arr2[l];
	int arr[l+l];
	printf("Enter array 1 :");
	for(int i = 0; i < l; i++) {
		scanf("%d", &arr1[i]);
		arr[i] = arr1[i];
	}
	printf("Enter array 2 :");
	for(int i = 0; i < l; i++) {
		scanf("%d", &arr2[i]);
		arr[l+i] = arr2[i];
	}

	printf("Conc array: ");
	for(int i = 0; i < 2*l; i++) {
		printf("%d ", arr[i]);
	}
	printf("Conc array after replacement: ");
	for(int i = l; i < 2*l; i++) {
		arr[i] = 0; 
	}
	for(int i = 0; i < 2*l; i++) {
		printf("%d ", arr[i]);
	}

}
