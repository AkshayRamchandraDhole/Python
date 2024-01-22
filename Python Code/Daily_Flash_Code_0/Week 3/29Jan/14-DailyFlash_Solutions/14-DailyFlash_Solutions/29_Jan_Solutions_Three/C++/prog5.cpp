#include<iostream>

int main() {
	int d, m, y;
	std::cout << "Enter date : ";
	std::cin >> d >> m >> y;
	if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 0 && d <= 31) && y >= 0) {
		std::cout << "Vaiid date";
	} else if((m == 4 || m == 6 || m == 9 || m == 11) && (d > 0 && d <= 30) && y >= 0){
		std::cout << "valid date";
	} else if(m == 2 && y >= 0) {
		if(y % 100 == 0) {
			if(y % 400 == 0) {
				if(d > 0 && d <= 29) {
					std::cout << "valid date";
				} else {
					std::cout << "Invalid date";
				}
			} else {
				if(d > 0 && d <= 28) {
					std::cout << "Valid date";
				} else {
					std::cout << "Invalid date";
				}
			}
		} else if(y % 4 == 0) {
			if(d > 0 && d <= 29) {
				std::cout << "valid date";
			} else {
				std::cout << "Invalid date";
			}	
		} else if(d > 0 && d <= 28) {
			std::cout << "valid date";
		} else {
			std::cout << "Invalid date";
		}

	} else {
		std::cout << "Invalid";
	}
	return 0;
}
