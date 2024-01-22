
#include <iostream>

int main () {
	int n, sum = 0;
	std::cout << ("Enter Number: ");
	std::cin >> n;
	for(int i = (n%2==0)?n:n-1; i >= 0; i-=2){
		std::cout << (i) << " ";
	}
	std::cout << ("\n");
}
