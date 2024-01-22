
#include <iostream>

int main () {
	int n,temp, sum = 0, fact;
	std::cout << ("Enter Number: ");
	std::cin >> n;
	temp = n;
	while(n!=0){
		fact = 1;
		for(int i = 1; i<= n%10; i++){

			fact = fact * i;
		}
		sum = sum + fact;
		n = n / 10;
	}
	if(sum == temp){
		std::cout << ("Number is Strong Number\n");
	}
	else{
		std::cout << ("Number is not Strong Number\n");
	}
}
