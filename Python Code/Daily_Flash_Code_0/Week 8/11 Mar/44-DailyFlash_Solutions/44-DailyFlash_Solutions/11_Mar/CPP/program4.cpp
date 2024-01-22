
#include <iostream>

int main() {

	int n,a = 0, b = 1, c;
	c = a+b;
	std::cout << ("Enter Number : \n");
	std::cin >> n;
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j > n-i && j < n+i){
				std::cout << a << "\t";
				a = b;
				b = c;
				c = a+b;
			}
			else
				std::cout << ("\t");
		}
		std::cout << ("\n");
	}
}
