
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	std::cin >> n;
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j > n-i && j < n+i)
				std::cout << (char)((64+j-(n-i))) << "\t";
			else
				std::cout << ("\t");
		}
		std::cout << ("\n");
	}
}
