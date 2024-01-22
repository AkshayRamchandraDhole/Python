#include<iostream>
#include<math.h>
int main() {
	int l, mul = 1;
	std::cin >> l;
	for(int i = 1; i <= l; i++) {
		mul *= pow(i, i);
	}
	std::cout << mul;
}
