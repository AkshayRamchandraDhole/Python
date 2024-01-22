#include<iostream>
#include<stdlib.h>

int main() {
	int l;
	std::cout << "Enter len: ";
	std::cin >> l;
	int arr1[l];
	int arr2[l];
	int arr[l+l];
	std::cout << "Enter array 1 :";
	for(int i = 0; i < l; i++) {
		std::cin >> arr1[i];
		arr[i] = arr1[i];
	}
	std::cout << "Enter array 2 :";
	for(int i = 0; i < l; i++) {
		std::cin >> arr2[i];
		arr[l+i] = arr2[i];
	}

	std::cout << "Conc array: ";
	for(int i = l; i < 2*l; i++) {
		arr[i] = 0;
	}
	for(int i = 0; i < 2*l; i++) {
		std::cout<<arr[i];
	}



	std::cout<<std::endl;
}
