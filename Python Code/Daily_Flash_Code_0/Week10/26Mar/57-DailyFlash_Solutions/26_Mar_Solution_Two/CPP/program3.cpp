
#include <iostream>
#include <stdlib.h>
int main() {
	int n;
	std::cout << ("Enter length  of Array : ");
	std::cin >> n;
	int *arr = new int[n];
	for(int i =  0; i < n ; i++){
		std::cin >> arr[i];
	}
	std::cout << "Before : \n";
	for(int i =  0; i < n ; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << "\nAfter : \n";
	for(int i = 0; i < n/2 ; i++){
		arr[n-1-i] = arr[i] + arr[n-1-i] - (arr[i] = arr[n-1-i]);
	}

	for(int i =  0; i < n ; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
