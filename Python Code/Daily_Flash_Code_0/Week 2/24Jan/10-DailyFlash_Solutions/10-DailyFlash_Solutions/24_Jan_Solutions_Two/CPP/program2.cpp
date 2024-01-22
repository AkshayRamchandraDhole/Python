
#include <iostream>
int main() {
	
	for(int i = 3; i <= 100; i++) {
		if(i % 4 == 0 && i % 7 == 0)
			std::cout << i << " ";
	
	}
	std::cout << ("\n");
	return 0;
}
