#include<stdio.h>

int main() {
	int num, n = 0;
	scanf("%d",  &num);
	int temp = num;
	while(temp != 0) {
		n++;
		temp /= 10;
	}
	int arr[n];
	int i = 0;
	while(num != 0) {
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

}
