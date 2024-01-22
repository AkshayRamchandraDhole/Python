
#include <iostream>

int main (void){

	int n,i;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	
	if(n < 0)
		exit(0);
	
	i = 10;
	while(i > 0){
		std::cout << n  << " * " << i  << " = " << n * i << std::endl;
		i--;
	}
}
