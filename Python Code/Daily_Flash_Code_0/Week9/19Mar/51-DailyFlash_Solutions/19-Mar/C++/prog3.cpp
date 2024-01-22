#include<iostream>

int main() {
	int num;
	std::cin >>num;
	int rev = 0, n = 0;
	while(num != 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
		n++;
	}
	int arr[n];
	int i = 0;
	while(rev != 0) {
		arr[i] = rev % 10;
		rev /= 10;
		i++;
	}
	for(int i = 0; i < n; i++) {
		std::cout << arr[i];
	}

}
