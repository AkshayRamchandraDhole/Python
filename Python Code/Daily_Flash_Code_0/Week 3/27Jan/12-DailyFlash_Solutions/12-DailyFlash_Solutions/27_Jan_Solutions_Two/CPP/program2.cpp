#include <iostream>

int main () {

	int a, b;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;

	std::cout << ("Minimum amongst ") << a << " and " << b << " : " << ((a>=b)?b:a) << std::endl;
}

