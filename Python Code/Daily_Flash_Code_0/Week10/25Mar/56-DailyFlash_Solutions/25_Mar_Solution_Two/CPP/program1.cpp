
#include <iostream>
#include <math.h>
#define pie 3.142

int main () {
	int n, x, y;
	float mul = 0;
	std::cout << ("Enter length: ");
	std::cin >> n;
	std::cout << ("Enter x and y: ");
	std::cin >> x >> y;
	int cnt = 1;
	while(cnt <= n){
		mul = mul + (float)(cnt)/pow((x+y),cnt);
		cnt++;
	}
	std::cout << (mul) << "\n";
}
