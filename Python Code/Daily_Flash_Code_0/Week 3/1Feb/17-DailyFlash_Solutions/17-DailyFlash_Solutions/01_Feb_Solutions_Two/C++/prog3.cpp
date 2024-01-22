#include<iostream>

int main() {
	int hrs;
	std::cout << "hrs : ";
	std::cin >> hrs;
	if(hrs >= 0) {
		std::cout << "sec : " << hrs * 60 * 60;
	} else {
		std::cout << "Enter valid det.";	
	}
	return 0;
}
