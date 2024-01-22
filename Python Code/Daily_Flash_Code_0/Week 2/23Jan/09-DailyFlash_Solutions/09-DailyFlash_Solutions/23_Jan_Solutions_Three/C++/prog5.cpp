#include<iostream>

int main(void) {
	int num, fact = 1;
	std::cout << "Input : ";
	std::cin >> num;
	for(int i = 1; i <= num; i++)
		fact *= i;
	if(num >= 0)
		std::cout << "Fact : " << fact;
	else
		std::cout << "Enter valid num.";
	return 0;
}
