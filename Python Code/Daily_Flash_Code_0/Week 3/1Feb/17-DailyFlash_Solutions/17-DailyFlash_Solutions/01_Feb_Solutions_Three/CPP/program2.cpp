
#include <iostream>

int main () {

	int n;
	std::cout << ("Enter Limit : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = n; i >= 0; i--){
		if(i % 2 != 1)
			std::cout << i << " ";
	}
	std::cout << ("\n");
}
