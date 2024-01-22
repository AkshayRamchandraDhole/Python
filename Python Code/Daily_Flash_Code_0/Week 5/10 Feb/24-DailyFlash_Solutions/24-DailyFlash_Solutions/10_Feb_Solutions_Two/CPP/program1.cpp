
#include <iostream>

int main () {
	int n, sum = 0;
	std::cout << ("Enter Number: ");
	std::cin >> n;
	for(int j = 1; j <= n; j++){
		sum = 0;
		for(int i = 1; i <= j/2; i++){
			if(j % i == 0){
				sum = sum + i;
			}
		}
		if(sum > j){
			std::cout << (j) << " ";
		}

	}
	std::cout << std::endl;
}
