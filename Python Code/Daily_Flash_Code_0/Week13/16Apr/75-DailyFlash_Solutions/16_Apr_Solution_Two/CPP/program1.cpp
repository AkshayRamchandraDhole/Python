
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
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
	for(int i = 1; i < 2*n; i++){
		for (int j = 0; j < i; j++){
			if(arr[j] == arr[i]){
				arr[i] = 0;
				break;
			}
		}
	}

	std::cout << ("Array After concatenation and sorting: \n");
	for(int i = 0; i < 2*n ; i++){
		std::cout << (arr[i]) << " ";
	}
	std::cout << ("\n");

	
}
