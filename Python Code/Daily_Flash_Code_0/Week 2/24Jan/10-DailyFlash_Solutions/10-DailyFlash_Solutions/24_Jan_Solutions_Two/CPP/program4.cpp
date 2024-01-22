
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
		flag = (flag == 1)?0:1;
		for(int j = 1; j <= n-i+1; j++) {
			std::cout << flag << " ";

		}
		std::cout << ("\n");
	}
}
