#include<iostream>

int main() {
	int num, sum = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	for(int i = 1; i <= num / 2; i++) {
		if(num % i == 0)
			sum += i;
	}
	if(sum == num && num > 0)
		std::cout <<"Perfect.";
	else 
		std::cout <<"Not perfect.";
	return 0;
}
