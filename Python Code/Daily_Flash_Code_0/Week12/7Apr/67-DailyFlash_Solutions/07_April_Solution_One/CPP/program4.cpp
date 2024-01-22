
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, k = 0;
	std::cout << ("Enter Limit : ");
	std::cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n*2 - 1; j++){
			if(j > n-i && j < n+i){
				std::cout << ((j%2 == 0)?1:0) << "\t";
			}
			else{
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
