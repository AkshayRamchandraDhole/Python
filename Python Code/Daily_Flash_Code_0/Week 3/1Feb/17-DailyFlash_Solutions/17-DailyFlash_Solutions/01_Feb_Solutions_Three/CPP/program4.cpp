
#include <iostream>

int main () {

	int n;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i + 1; j++){
			std::cout << ((j%2==1)? '+':'=') << " ";
		}
		std::cout << ("\n");
	}
}
