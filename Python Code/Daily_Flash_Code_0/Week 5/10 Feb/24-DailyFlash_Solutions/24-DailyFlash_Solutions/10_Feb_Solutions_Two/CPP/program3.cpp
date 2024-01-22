
#include <iostream>
int main() {

	int n;
	bool k = 1;
	while(k){
		std::cin >> n;
		if(n < 0)
			exit(0);
		std::cout << (n) << std::endl;
	}
}
