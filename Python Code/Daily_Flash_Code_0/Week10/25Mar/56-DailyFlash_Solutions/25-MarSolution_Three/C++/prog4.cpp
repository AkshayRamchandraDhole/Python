#include<iostream>

int main() {
	int num = 1;
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				std::cout << num;
				if(j != 3)
					num++;	
			} 
		} else {
			for(int j = 0; j < 7 - i; j++) {
				num--;
				std::cout << num;
			}
		}
		std::cout << "\n";
	}
}
