
#include <iostream>

int main() {
	
	int n2;
	std::cout << ("Enter Positive Number : \n");
	std::cin >> n2;
	
	if(n2 < 0){
		std::cout << ("Enter Positive Number\n");
		exit(0);
	}
	for(int i = 1; i <= n2; i++) {
		if(i % 2 == 0 )
			std::cout << "Cube of " << i << " : " << i * i * i
				<< " and Square of  " << i << " : " << i * i << std::endl;
	}
}
