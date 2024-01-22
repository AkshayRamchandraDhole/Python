#include<iostream>
#include<math.h>
int main(void) {
	float x1, x2, y1, y2, x3, y3, s, a, b, c, p;
	std::cout << "(A)Enter x1 : ";
	std::cin >> x1;
	std::cout << "(A)Enter y1 : ";
	std::cin >> y1;
	std::cout << "(B)Enter x2 : ";
	std::cin >> x2;
	std::cout << "(B)Enter y2 : ";
	std::cin >> y2;
	std::cout << "(C)Enter x3 : ";
	std::cin >> x3;
	std::cout << "(C)Enter y3 : ";
	std::cin >> y3;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = a + b + c;
	std::cout << "X = " << (a * x1 + b * x2 + c * x3) / p << "\nY = " << (a * y1 + b * y2 + c * y3) / p;
}
