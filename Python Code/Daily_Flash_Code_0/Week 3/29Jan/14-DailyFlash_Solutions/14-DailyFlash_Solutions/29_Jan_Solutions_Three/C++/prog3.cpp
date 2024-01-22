#include<iostream>

int main() {
	double l, b;
	std::cout << "Enter len: ";
	std::cin >> l;
	std::cout << "Enter br : ";
	std::cin >> b;
	if(l >= 0 && b >= 0)
		std::cout << "Area = " << l * b;
	else
		std::cout << "Enter valid det.";
}
