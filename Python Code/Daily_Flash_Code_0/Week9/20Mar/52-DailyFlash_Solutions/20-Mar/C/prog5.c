#include<stdio.h>

int main() {
	int n, sum = 0, num;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	float avg = (float)sum / (float)n;
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (arr[i] - avg) * (arr[i] - avg);
	}
	printf("%f", (float)sum / n);
}
