
#include <iostream>
#include <stdlib.h>
int main() {
	int n, len;
	std::cout << ("Enter length of Array : ");
	std::cin >> len;
	int *arr = new int[len];
	int sum = 0;
	for(int i = 0; i < len; i++){
		std::cin >> arr[i];
		sum = sum + arr[i];
	}
	std::cout << ("sum : ") << sum << std::endl;
	std::cout << ("Avg : ") << float(sum)/len << std::endl;
}
