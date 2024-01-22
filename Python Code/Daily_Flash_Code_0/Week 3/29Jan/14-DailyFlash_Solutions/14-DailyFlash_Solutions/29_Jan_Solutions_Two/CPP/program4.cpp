
#include <iostream>
int main() {
	
	int n, flag;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0){
		exit(0);
	}
	flag = 1;
	for(int i = n; i >=0 ; i--) {
		for(int j = i; j <= n; j++) {
			std::cout << j << "\t";
			flag++;

		}
		std::cout << ("\n");
	}
}
