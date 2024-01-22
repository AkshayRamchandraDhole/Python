
#include <iostream>
int main() {
	
	for(int i = 3; i <= 100; i++) {
		if(i % 3 == 0 || i % 5 == 0)
			std::cout << i << " ";
	
	}
	std::cout << ("\n");
	return 0;
}
