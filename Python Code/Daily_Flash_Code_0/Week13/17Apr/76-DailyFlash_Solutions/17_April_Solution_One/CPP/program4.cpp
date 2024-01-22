
#include <iostream>

int main () {
	int n;
	std::cout << ("Enter Limit : ");
	std::cin >> n;

	for(int i = 1; i < 2*n; i++){
		for(int j = 1; j < 2*n; j++){
			if(i==j || j == (2*n-i)){
				std::cout << "X\t";
			}
			else{
				std::cout << "\t";
			}
		}
		std::cout << ("\n");
	}
}
