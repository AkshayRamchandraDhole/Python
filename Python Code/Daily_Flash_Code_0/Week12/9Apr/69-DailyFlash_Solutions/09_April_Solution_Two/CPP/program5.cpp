
#include <iostream>

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main () {
	int per = fact(8)/(fact(3)*fact(5));
	std::cout << "Possible ways : " << per << std::endl;
}
