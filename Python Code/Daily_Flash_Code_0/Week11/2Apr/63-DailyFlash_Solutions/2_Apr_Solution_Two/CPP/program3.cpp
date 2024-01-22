
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int p, int r) {

	int ind;
	for(int i = p; i < r; i++){
		ind = i;
		for(int j = i; j <= r; j++){
			if(arr[ind] < arr[j]){
				ind = j;
			}
		}
		arr[ind] = arr[ind] + arr[i] - (arr[i] = arr[ind]);
	}
}

int main () {
	
	int n;
	std::cout << ("Enter Length Of Array : ");
	std::cin >> n;

	int *arr = new int[n];

	for(int i = 0 ; i < n ; i++ ){
		std::cin >> arr[i];
	}

	std::cout << ("Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		std::cout << (*(arr+i)) << " ";
	}
	std::cout << ("\n");
	merge(arr, 0, n-1);

	std::cout << ("Sorted Array : \n");
	for(int i = 0 ; i < n ; i++ ){
		std::cout << (*(arr+i)) << " ";
	}
	std::cout << ("\n");
}
