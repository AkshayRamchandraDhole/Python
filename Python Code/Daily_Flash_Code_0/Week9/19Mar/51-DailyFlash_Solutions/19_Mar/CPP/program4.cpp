
#include <iostream>

int main () {
	int n, k = 1;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	for(int i = n; i >= 1; i--){
		for(int j = 1; j < n+i; j++){
			if(j > n - i && (n-i+1) % 2 == 1){
				std::cout << (k) << "\t";
				k++;
			}
			else if(j > n - i && (n-i+1) % 2 == 0){
				std::cout << (k) << "\t";
				k--;
			}
			else
				std::cout << ("\t");
		}
		if((n-i + 1)%2 == 1) k--;
		else k++;
		std::cout << ("\n");
	}
}	
