#include<iostream>

int main() {
	int n;
	std::cin >>n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	  for(int i = 0; i < n / 2; i++) {

                int t = arr[n - 1 - i];
                arr[n - 1 - i] = arr[i];
                arr[i] = t;
        }
        for(int i = 0; i < n; i++) {
		std::cout << arr[i];
        }



}
