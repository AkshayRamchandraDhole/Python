
#include <iostream>
#include <math.h>
#define pie 3.142

int main () {
	int b;
	float h;
	float area;
	std::cout << ("Enter area and base\n");
	std::cin >> area;
	std::cin >> b;
	h = (2 * area) / b;
	std::cout << ("Height : ") << (h) << "\n";
}
