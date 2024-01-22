
#include <iostream>

int main () {
	int n, sum = 0;
	std::cout << ("Enter Number: ");
	std::cin >> n;
	while(n!=0){
		sum = sum + n % 10;
		n = n / 10;
	}
	std::cout << ("Sum : ") << (sum) << "\n";
}
