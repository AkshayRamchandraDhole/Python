
#include <iostream>
int main () {

	int cnt = 0, n;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n<0)
		return 0;
	while(n != 0){
		(n%10)%2?0:cnt++;
		n = n / 10;
	}	
	std::cout << ("Count : ") << (cnt) << std::endl;
}
