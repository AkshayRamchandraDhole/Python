
#include <iostream>

int main () {
	int n,i,fact = 1,sum,temp;

	std::cout << ("Enter Numbers : ");
	do {
		std::cin >> n;
		fact = 1;
		temp = n;
		sum = 0;
		while(n != 0){
			fact = 1 ;
			for(int i = 1; i <= n%10 ;i++){
				fact = fact * i;
			}
			if(n%10 == 0)
				fact = 1;
			sum = sum + fact;
			n = n / 10;
		}
		if(temp != sum)
			std::cout << (temp) << std::endl;
		else
			break;
	}while(1);
}
