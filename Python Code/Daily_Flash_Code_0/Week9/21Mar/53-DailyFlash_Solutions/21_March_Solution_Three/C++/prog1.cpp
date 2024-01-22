#include<iostream>
#include<math.h>
int main() {
	int l, mul = 0;
	std::cin >> l;
	for(int i = 1; i <= l; i++) {
		mul += pow(i, i) * (i - 1);
	}
	std::cout << mul;
}
