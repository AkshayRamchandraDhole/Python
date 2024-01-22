
#include <iostream>

int main() {

	int n,k;
	std::cout << ("Enter Number : \n");
	std::cin >> k;
	for(int i = 1;i <= k; i++){
		n = i;
		while(n != 0){
			if(n%10 == 0) {
				std::cout << (i) << " ";
				break;
			}
			n = n / 10;
		}
	}
	std::cout << std::endl;
}
