
#include <iostream>

int main() {
	
	int n, flag;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0){
		exit(0);
	}
	flag = 'A';
	for(int i = n; i >=1 ; i--) {
		flag = (flag == 'A')?'a':'A';
		for(int j = 1; j <= n-i+1; j++) {
			std::cout << (char)flag << " ";

		}
		std::cout << ("\n");
	}
}
