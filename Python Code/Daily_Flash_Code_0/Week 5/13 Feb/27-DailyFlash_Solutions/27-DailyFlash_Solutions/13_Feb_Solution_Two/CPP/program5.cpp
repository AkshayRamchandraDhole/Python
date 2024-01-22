
#include <iostream>

int main () {

	int cnt1 = 0,cnt2 = 0, n;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n<0)
		return 0;
	while(n != 0){
		(n%10)%2?cnt1++:cnt2++;
		n = n / 10;
	}	
	std::cout << ("Count of Odd digits: ") << (cnt1) << "\n";
	std::cout << ("Count of Even digits: ") << (cnt2) << "\n";
}
