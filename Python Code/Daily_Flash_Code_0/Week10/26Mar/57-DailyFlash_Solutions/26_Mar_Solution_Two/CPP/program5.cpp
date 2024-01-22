
#include <iostream>
#include <math.h>
#define pie 3.142

int main () {
	float b;
	float h;
	float area;
	std::cout << ("Enter area and height\n");
	std::cin >> area;
	std::cin >> h;
	b = (2 * area) / h;
	std::cout << ("Base : ") << (b) << "\n";
}
