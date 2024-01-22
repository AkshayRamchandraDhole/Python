#include<iostream>

int main() {
	int n;
	std::cin >>n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	int temp = arr[n - 1];
	arr[n - 1] = arr[0];
	arr[0] = temp;
	for(int i = 0; i < n; i++) {
		std::cout << arr[i];
	}

}
