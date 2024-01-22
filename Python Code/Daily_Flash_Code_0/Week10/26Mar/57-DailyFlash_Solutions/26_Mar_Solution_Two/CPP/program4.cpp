
#include <iostream>

int main () {
	
	int n, k = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	char st[] = "HELL";
	for(int i = 1; i <= n*2 - 1; i++){ 
		k = 0;
		for(int j = 1; j <= n; j++){
			if(i <= n && j <= i){
				std::cout << st[k++] << ("\t");
			}
			else if(i > n && j > i - n) {
				std::cout << st[k++] << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
