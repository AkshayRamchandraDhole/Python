
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	std::cout << ("Enter Number : ");
	char k = 'A'-1;
	std::cin >> n;
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				std::cout << (++k) << "\t";
			}
			else if(i > n && j <= n - (i-n)) {
				std::cout << (--k) << "\t";
			}
			else{
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
