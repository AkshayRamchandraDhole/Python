#include<iostream>

int main() {
	int n, sum = 0, num;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
		sum += arr[i];
	}
	float avg = (float)sum / (float)n;
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (avg - arr[i]) * (avg - arr[i]);
	}
	std::cout << (float)sum / n;
}
