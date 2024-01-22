
#include <iostream>

int main () {

	int n, j, sum = 0;
	std::cout << ("Enter Limit : ");
	std::cin >> n;

	if (n < 0)
		exit(0);

	for(int i = 1; i <= n; i++){
		sum = 0;
		for(j = 1; j <= i/2; j++){
			
			if(i % j == 0){
				sum = sum + j;
			}
		}
		if(sum == i)
			std::cout << i << " ";
	}
	std::cout << ("\n");
}
