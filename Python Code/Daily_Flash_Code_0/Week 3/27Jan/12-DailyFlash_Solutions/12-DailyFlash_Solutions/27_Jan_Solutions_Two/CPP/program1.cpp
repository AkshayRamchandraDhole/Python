
#include <iostream>

int main() {
	
	int n1, n2;
	std::cout << ("Enter Positive Numbers : \n");
	std::cin >> n1 >> n2;

	if(n1 < 0 || n2 < 0 || n1 > n2){
		std::cout << ("Enter Positive Numbers or second Number should greater than first Number\n");
		exit(0);
	}
	for(int i = n1; i <= n2; i++) {
		if(i % 2 == 0 )
			std::cout << i << " ";
	}
	std::cout << ("\n");
}
