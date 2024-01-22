
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
	arr[n-1] = arr[0] + arr[n-1] - (arr[0] = arr[n-1]);

	for(int i =  0; i < n ; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
