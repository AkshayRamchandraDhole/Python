
#include <iostream>

int main() {
	int n, k = 0;
	char c = 64;
	std::cout << ("Enter Limit : ");
	std::cin >> n;
	for(int i = 1; i <= 2*n-1; i++){
		for(int j = n*2-1; j >= 1; j--){
			if(j > (n-i) && j < (n+i) && i <= n){
				std::cout << (char)((i%2 == 1)?i+48:c) << "\t";
			}
			else if(i>n && j > (i-n) && j < (2*n-(i-n))){
				std::cout << (char)((i%2==1)?(n-(i-n) + 48):c) << "\t";
			}
			else {
				std::cout << ("\t");
			}	
			
		}
		if(i<=n && i % 2 == 1)
			c++;
		else if(i>n)
			c--;
		std::cout << ("\n");
	}
}
