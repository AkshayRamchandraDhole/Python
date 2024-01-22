
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main () {

	int n;
	std::cout << ("Enter length of Array : ");
	std::cin >> n;

	int *arr = new int[n];
	int *k = new int[n];
	std::cout << ("Array 1 : \n");
	for(int i = 0; i < n ; i++){
		std::cin >> (arr[i]);
	}
	std::cout << ("Array 2 : \n");
	for(int i = 0; i < n ; i++){
		std::cin >> (k[i]);
		k[i] = i[k]-arr[i];
	}
	std::cout << ("Subtraction of Elements: \n");
	for(int i = 0; i < n ; i++){
		if(k[i] < 0)
			k[i] = -1*k[i];
		std::cout << (k[i]) << " ";
	}
	std::cout << ("\n");

	
}
