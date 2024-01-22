#include<iostream>

int main() {
	float rs;
	std::cout << "Enter rs : ";
	std::cin >> rs;
	if(rs >= 0)
		std::cout << "Dollar : " << rs / 71.45;
	else 
		std::cout << "Enter valid det.";
	return 0;
}
