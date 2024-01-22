
#include <iostream>

int main() {
	
	int n, flag;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0){
		exit(0);
	}
	flag = 1;
	for(int i = n; i >=1 ; i--) {
		
		for(int j = 1; j <= n-i+1; j++) {
			std::cout << flag*flag << " ";
			flag++;
		}
		std::cout << ("\n");
	}
}
