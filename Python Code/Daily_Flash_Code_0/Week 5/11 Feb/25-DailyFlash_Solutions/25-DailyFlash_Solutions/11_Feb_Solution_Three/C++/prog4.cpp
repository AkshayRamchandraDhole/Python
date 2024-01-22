#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i)
				std::cout << "  ";
			else
				std::cout << (char)(68 - j) << " ";
		}
		printf("\n");	
	}
	return 0;
}
