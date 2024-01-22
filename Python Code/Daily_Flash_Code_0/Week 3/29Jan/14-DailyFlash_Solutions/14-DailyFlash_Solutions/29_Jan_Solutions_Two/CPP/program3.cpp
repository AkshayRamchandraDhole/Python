#include <iostream>

int main (void){

	int l,b;
	std::cout << ("Enter length and breadth : \n");
	std::cin >> l >> b;
	
	if(l < 0 || b < 0 || l < b)
		exit(0);

	std::cout << ("Area Of Rectangle = ") << l*b << "sq unit\n";
}
