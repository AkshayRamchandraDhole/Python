#include<iostream>

int main() {
	int n;
	while(1) {
		std::cin >> n;
		if(n < 0)
			break;
		printf("u entered : %d\n", n);	
	}
	return 0;
}
