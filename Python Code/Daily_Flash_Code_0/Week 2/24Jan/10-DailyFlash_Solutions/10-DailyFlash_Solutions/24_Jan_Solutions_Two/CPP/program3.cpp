#include <iostream>

int main() {
	
	int n;
	std::cout << ("Enter Positive Number : ");
	std::cin >> n;

	if(n < 0){
		std::cout << ("Enter Positive Number\n");
		exit(0);
	}
	for(int i = 1; i <= n; i++) {
		if(i % 2 != 0 )
			std::cout << "Cube of " << i << " : " << i * i * i
				<< " and Square of  " << i << " : " << i * i << std::endl;
	}
}
