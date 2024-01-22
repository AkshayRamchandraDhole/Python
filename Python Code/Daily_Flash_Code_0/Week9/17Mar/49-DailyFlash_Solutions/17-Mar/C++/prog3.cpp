#include<iostream>

int isAng(int num) {
	int sum = 0, temp = num, rem;
	
	while(temp != 0) {
		rem = temp % 10;
		sum += rem * rem * rem;
		temp /= 10;
	}
	if(sum == num)
		return 1;
	return 0;
	
}	
int main() {
	int num, f = 0;
	do {
		if(f != 0)
			std::cout << num << "\n";	
		std::cin >> num;
		f = 1;
	} while(isAng(num) != 1);
}
