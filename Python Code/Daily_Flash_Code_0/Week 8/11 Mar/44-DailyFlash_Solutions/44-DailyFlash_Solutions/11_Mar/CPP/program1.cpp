
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Limit : \n");
	std::cin >> n;
	std::cout << "Autographic Number : \n";
	for(int i = 1; i <= n; i++){
		if(i*i % 10 == i){
			std::cout << (i) << " ";
		}
	}
	std::cout << std::endl;
}
