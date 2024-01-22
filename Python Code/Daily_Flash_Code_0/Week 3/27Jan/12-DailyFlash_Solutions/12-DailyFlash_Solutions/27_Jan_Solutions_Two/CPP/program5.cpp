#include <iostream>

int main () {

	int a, b, c;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b >> c;

	if(a >= b)
		if(a >= c)
			std::cout << "Maximum : " << a << std::endl;
		else
			std::cout << "Maximum : " << c << std::endl;
	else if(b >= c)
		std::cout << "Maximum : " << b << std::endl;
	else
		std::cout << "Maximum : " << c << std::endl;
	return 0;
}
