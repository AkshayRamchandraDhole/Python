#include<iostream>

int isStrong(int num) {
	int sum = 0, temp = num, rem, fact;
	
	while(temp != 0) {
		rem = temp % 10;
		fact = 1;
		for(int i = 1; i <= rem; i++)
			fact *= i;
		sum += fact;
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
	} while(isStrong(num) != 1);
}
