
#include <iostream>

int main () {

	int n;
	std::cout << ("Enter Hrs : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	std::cout << n * 60 * 60 <<(" seconds\n");
}
