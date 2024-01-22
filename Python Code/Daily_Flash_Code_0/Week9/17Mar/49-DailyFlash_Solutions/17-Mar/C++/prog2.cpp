#include<iostream>
#include<math.h>
int main() {
	int num, n1, n2;
	std::cout << "Enter num : ";
	std::cin >> num;
	std::cout << "Enter n1, n2: ";
	std::cin >> n1;
	std::cin >> n2;
	int temp = num;
	int cnt = 0;
	while(temp != 0) {
		cnt++;
		if(temp % 10 == n1) {
			num += (n2 - n1) * pow(10, cnt - 1);	
		}
		temp /= 10;
	}
	std::cout << num;
}
