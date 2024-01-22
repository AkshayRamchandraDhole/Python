
#include <iostream>
#include <math.h>
#include <stdlib.h>

int main () {
	int n,t;
	float sum = 0,var = 0;
	std::cout << ("Total Number : ");
	std::cin >> t;
	int *arr = new int[t];

	std::cout << ("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		std::cin >> n;
		arr[i] = n;
		sum = sum + n;
	}
	sum = sum / t;
	for(int i = 0; i< t; i++){
		var = var + pow(arr[i] - (int)(sum),2);	
	}
	var = var/t;
	std::cout << ("Variance = ") << (var) << std::endl;
	std::cout << ("standard Deviation = ") << sqrt(var) << std::endl;
}
