#include <iostream>

int main () {

	int a, b;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;

	std::cout << ("Maxim amongst ") << a << " and " << b << " : " << ((a>=b)?a:b) << std::endl;
}

