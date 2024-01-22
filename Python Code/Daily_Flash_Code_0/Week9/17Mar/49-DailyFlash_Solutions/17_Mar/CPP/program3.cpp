
#include <iostream>

int main () {
	int n,temp,rev;

	std::cout << ("Enter Numbers : ");
	do {
		std::cin >> n;
		rev = 0;
		temp = n;
		while(n != 0){
			rev = rev + (n % 10)*(n%10)*(n%10);
			n /= 10;
		}
		if(temp != rev)
			std::cout << (temp) << "\n";
		else
			break;
	}while(1);
}
