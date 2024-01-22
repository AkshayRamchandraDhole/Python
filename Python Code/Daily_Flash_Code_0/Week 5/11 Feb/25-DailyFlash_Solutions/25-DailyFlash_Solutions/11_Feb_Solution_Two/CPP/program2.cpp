
#include <iostream>
#include<math.h>

int main () {
	int n, sum = 0, c = 0;
	std::cout << ("Enter Octal Number: ");
	std::cin >> n;
	while(n!=0){
		if(n%10>=8){
			std::cout << ("Not a Octal Number\n");
			exit(0);
		}
		sum = sum + ((int)pow(8,c) * (n%10));
		c++;
		n = n/10;
	}	
	std::cout << ("Decimal Number : ") << (sum) << std::endl;
}
