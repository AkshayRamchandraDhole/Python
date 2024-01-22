#include<iostream>

int main() {
	int var = 7;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			if(j > 0)
				var--;
			std::cout << var << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
