
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, k = 0;
	std::cout << ("Enter Limit : ");
	std::cin >> n;
	for(int i = 1; i <= 2*n-1; i++){
		for(int j = n*2-1; j >= 1; j--){
			if(j > (n-i) && j < (n+i) && i <= n){
				std::cout << (i) << "\t";
			}
			else if(i>n && j > (i-n) && j < (2*n-(i-n))){
				std::cout << (n-(i-n)) << "\t";
			}
			else {
				std::cout << ("\t");
			}	
			
		}
		std::cout << ("\n");
	}
}
