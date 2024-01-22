
#include <iostream>
#include <math.h>

int main () {
	
	int a,b,c;
	std::cout << ("Enter a, b and c : ");
	std::cin >> a >> b >> c;
	float x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	float x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	std::cout << ("x1 : ") << (x1) << std::endl;
	std::cout << ("x2 : ") << (x2) << std::endl;
}
