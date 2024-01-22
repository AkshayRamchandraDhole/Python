
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, k = 0;
	std::cout << ("Enter Limit : ");
	std::cin >> n;
	for(int i = 1; i <= n*2-1; i++){
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				std::cout << (char)(64+i) << "\t";
			}
			else if(i>n && j>(i-n)){
				std::cout << (char)(64+n-(i-n)) <<("\t");
			}
		}
		std::cout << ("\n");
	}
}
