
#include <iostream>

int main () {
	int n, k, inc = 0;
	char ch = 'A';
	std::cout << ("Enter Number : ");
	std::cin >> n;

	for(int i = n; i >= 1; i--){
		k = inc;
		for(int j = 1; j < n+i; j++){
			if(j > n - i){
				std::cout << ch << (k) << "\t";
				k++;
				ch++;
			}
			else
				std::cout << ("\t");
		}
		inc += 2;
		std::cout << ("\n");
	}
}	
