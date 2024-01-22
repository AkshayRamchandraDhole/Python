
#include <iostream>

int main () {
	int k = 1, m = 2;
	
	while(k <= 50){
		if(m % 2 == 0)
			std::cout << (m) << " ";
	
		m+=2;
		k++;
	}
	std::cout << ("\n");
}
