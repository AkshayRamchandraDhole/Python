#include<iostream>
	
int main() {
	for(int i = 1; i <= 100; i++) {
		if(i % 10 == 0) {
			std::cout << i << " ";
		}
	}
	return 0;
}
