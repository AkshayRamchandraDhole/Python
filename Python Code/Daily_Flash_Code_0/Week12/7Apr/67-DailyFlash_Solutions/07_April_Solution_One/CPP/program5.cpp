
#include <iostream>

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main () {

	int r,n;
	std::cout << ("N and R: ");
	std::cin >> n >> r;
	int per = fact(n)/(fact(r)*fact(n-r));
	std::cout << ("To pick ") << r <<  " items from s set of " << n << "items there are " << per 
	<< " possible ways.\n";
}
