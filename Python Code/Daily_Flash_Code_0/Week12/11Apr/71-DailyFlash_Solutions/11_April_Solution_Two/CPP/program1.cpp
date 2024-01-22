
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main () {

	int n, max1, max2;
	std::cout << ("Enter length of Array : ");
	std::cin >> n;
	int *arr = new int[n];
	std::cout << ("Array : \n");
	for(int i = 0; i < n ; i++){
		std::cin >> (arr[i]);
	}
	max1 = max2 = -999;
	for(int i = 0; i < n ; i++){
		if(max1 < arr[i]){
			max2 = max1;
			max1 = arr[i];
		}
		else if(max2 < arr[i]){
			max2 = arr[i];
		}
	}
	std::cout << max2 << std::endl;
}
