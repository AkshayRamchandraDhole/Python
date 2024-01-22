
#include <iostream>

int main () {

	int n, k;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if (n < 0)
		exit(0);

	k = n * 2 - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			std::cout << k-- << "\t";
		}
		k = n * 2 - 1 - i;
		std::cout << ("\n");
	}
}
