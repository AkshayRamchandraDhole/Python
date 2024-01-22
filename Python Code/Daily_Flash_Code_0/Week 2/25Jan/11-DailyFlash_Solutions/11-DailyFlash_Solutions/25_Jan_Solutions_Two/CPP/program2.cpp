
#include <iostream>

int main () {

	int a, b;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;

	std::cout << ("Before Swap :\n");
	std::cout << ("a :") << (a) << std::endl;
	std::cout << ("b :") << (b) << std::endl;
	
	b = a + b - (a = b);
	
	std::cout << ("Before Swap :\n");
	std::cout << ("a :") << (a) << std::endl;
	std::cout << ("b :") << (b) << std::endl;
}
