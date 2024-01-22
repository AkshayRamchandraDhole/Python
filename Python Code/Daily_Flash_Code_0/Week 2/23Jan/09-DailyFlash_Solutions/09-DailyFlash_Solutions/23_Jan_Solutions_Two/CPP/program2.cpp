#include <iostream>

int main () {

	int n;
	std::cout << ("Enter Size : \n");
	std::cin >> n;

	if(n < 0)
		exit(0);

	int k = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			std::cout << k << "  ";
			k++;
		}
		std::cout << std::endl;
	}
	return 0;
}
