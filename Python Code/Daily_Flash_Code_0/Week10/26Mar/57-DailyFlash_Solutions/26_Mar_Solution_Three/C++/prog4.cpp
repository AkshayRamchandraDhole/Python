#include<iostream>

int main() {
	
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				
				if(j == 0)
					std::cout << "H";
				if(j == 1)
					std::cout << "E";
				if(j == 2 || j == 3)
					std::cout << "L";
			} 
		} else {
			for(int j = 0; j < 7 - i; j++) {
				 if(j == 0)
                                        std::cout << "H";
                                if(j == 1)
                                        std::cout << "E";
                                if(j == 2 || j == 3)
                                        std::cout << "L";

			}
		}
		std::cout << "\n";
	}
}
