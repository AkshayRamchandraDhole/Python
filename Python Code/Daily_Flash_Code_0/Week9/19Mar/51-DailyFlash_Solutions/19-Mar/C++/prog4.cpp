#include<iostream>

int main() {
	int num = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << " ";
			} else {
				if(i % 2 == 0) {
					std::cout << num;
					num++;
					if(j == 6 - i)
						num--;
				}

				else {
					std::cout << num;
					num--;
					if(j == 6 - i)
						num++;
				}
			}
		}
		std::cout << "\n";
	}
}
