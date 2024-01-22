
#include <iostream>

int main() {

	float n;
	std::cout << ("Rupees : ");
	std::cin >> n;
	
	if(n <= 0)
		exit(0);

	std::cout << ("Dollars : " )<< n * 0.014 << std::endl;
}
