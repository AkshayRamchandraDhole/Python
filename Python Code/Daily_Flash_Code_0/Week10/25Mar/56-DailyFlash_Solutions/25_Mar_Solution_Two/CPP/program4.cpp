
#include <iostream>

int main () {
	
	int n, k = 1;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				std::cout << k++ << ("\t");
			}
			else if(i > n && j > i - n) {
				std::cout << --k << ("\t");
			}
		}
		if(i==n)
			k--;
		std::cout << ("\n");
	}
}
