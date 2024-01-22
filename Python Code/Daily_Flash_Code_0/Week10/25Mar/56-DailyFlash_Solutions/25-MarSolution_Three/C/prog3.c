#include<stdio.h>

int main() {
	int num, n = 0;
	scanf("%d",  &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int t = arr[n - 1];
	arr[n - 1] = arr[0];
	arr[0] = t;

	for(int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}

}
