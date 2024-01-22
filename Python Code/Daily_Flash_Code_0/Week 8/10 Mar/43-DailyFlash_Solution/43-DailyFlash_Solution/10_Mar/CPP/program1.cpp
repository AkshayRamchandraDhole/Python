
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	std::cin >> n;
	if(n*n % 10 == n){
		std::cout << ("Number is Automorphic Number\n");
	}
	else{
		std::cout << ("Number is not Automorphic Number\n");
	}
}
