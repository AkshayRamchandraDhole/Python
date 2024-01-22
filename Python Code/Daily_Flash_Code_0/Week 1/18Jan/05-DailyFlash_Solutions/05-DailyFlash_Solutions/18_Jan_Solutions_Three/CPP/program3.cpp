
#include <iostream>

int main () {
	int k = 1, m = 1;
	
	while(k <= 50){
		if(m % 2 == 1)
			std::cout << (m) << " ";
	
		m+=2;
		k++;
	}
	std::cout << ("\n");
}
