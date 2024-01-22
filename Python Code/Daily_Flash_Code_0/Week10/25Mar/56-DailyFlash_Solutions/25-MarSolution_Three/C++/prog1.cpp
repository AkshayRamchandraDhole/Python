#include<iostream>
#include<math.h>
int main() {
	int l, x, y;
	float mul = 0;
	std::cin >> l >> x >> y;
	for(int i = 1; i <= l; i++) {
		mul += (i) / pow(x + y, i);
	}
	std::cout << mul;
}
