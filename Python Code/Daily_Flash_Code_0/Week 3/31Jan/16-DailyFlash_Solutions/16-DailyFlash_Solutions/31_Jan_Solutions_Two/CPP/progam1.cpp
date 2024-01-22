
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	
	if(n <= 0)
		exit(0);

	for(int i = 1; i <= n*n; i= i + n){
		std::cout << i << " ";
	}
	std::cout << ("\n");
}
