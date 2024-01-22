
#include <iostream>

int main () {

	int a,  b;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;
	
	int k = a + b;
	b = (a>b)? a - b : b - a;
	std::cout << ("Addition : ") << k << "\nSubtraction : " << b << std::endl;
}
