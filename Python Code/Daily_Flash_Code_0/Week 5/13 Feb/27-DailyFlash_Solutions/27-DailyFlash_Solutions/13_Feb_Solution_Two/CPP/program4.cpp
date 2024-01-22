
#include <iostream>

int main () {
	
	int n;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1 ; j--){
			if(j > i){
				std::cout << ("\t");
			}
			else{
				std::cout << (char)(64+j) << (i-j+3) << "\t";
			}
		}
		std::cout << ("\n");
	}	
}
