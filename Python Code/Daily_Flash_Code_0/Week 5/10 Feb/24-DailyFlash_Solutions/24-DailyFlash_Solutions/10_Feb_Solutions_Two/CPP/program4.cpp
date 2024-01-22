
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter size : ");
	std::cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < (n-i-1)){
				std::cout << ("\t");
			}
			else
				std::cout << ((j != (n-i-1))?(j*(j+i)):(3)) << "\t";
		}
		std::cout << ("\n");
	}
}
