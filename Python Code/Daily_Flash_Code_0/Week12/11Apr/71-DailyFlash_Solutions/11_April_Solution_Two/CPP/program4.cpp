
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, k = 0;
	std::cout << ("Enter Limit : ");
	std::cin >> n;
	for(int i = 1; i <= n; i++){
		k = n + 1;
		for(int j = n*2-1; j >= 1; j--){
			if(j >= i && j <= n){
				std::cout << (k) << "\t";
				k++;
			}
			else if(j >= n+1 && j <= (n*2-i)){
				std::cout << (j+1) << "\t";
			}
			else{
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
