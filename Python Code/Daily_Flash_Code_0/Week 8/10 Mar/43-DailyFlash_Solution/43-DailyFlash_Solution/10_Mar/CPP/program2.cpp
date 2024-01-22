
#include <iostream>
int main() {

	char c1 = 64, c2 = 64;
	std::cout << ("Enter Alphabets : \n");
	do {	
		c2 = c1;
		std::cin >> c1;
		
	}while(1 == c1-c2 && c1 <= 90);
	std::cout << ("You Entered Wrong Alphabet\n");
}
