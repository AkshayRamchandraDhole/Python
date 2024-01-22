#include <iostream>

int main () {

	float a,  b;
	std::cout << ("Enter Numbers : \n");
	std::cin >> a >> b;
	
	float k = a * b;
	
	if ((b==0 && b <= a) || (a == 0 && a <= b)){
		std::cout << ("Denominator can't be Zeror\n");
		exit(0);
	}
	else{
		std::cout << ("Multiplication : " ) << k << std::endl;
		std::cout << ("Division : ") << ((a/b) > (b/a)? a/b : b/a) << std::endl;
	}
}
