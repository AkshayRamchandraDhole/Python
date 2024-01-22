
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main () {

	int n;
	std::cout << ("Enter length of Array : ");
	std::cin >> n;

	int *arr = (int *)malloc(sizeof(int)*n);
	int *k = (int *)malloc(sizeof(int)*n);
	std::cout << ("Array 1 : \n");
	for(int i = 0; i < n ; i++){
		std::cin >> arr[i];
	}
	std::cout << ("Array 2 : \n");
	for(int i = 0; i < n ; i++){
		std::cin >> k[i];
	}
	arr = (int *)realloc(arr,2*n);
	for(int i = n; i < 2*n ; i++){
		arr[i] = k[i-n];
	}
	std::cout << ("Array After concatenation : \n");
	for(int i = 0; i < 2*n ; i++){
		std::cout << (arr[i]) << " ";
	}
	std::cout << ("\n");

	
}
