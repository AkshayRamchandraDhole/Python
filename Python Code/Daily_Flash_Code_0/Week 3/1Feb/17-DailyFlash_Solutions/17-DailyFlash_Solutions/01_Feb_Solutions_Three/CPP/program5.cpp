
#include <iostream>

int gcd(int n1, int n2){
	
	if(n2 != 0)
		return gcd(n2, n1 % n2);
	else
		return n1;

}

int main () {

	int n1, n2;
	std::cout << ("Enter Numbers : \n");
	std::cin >> n1>> n2;

	if(n1 < 0 || n2 < 0)
		exit(0);
	

	std::cout << "The GCD of " <<  n1 << " and " << n2 << " is " <<  gcd(n1, n2) << std::endl;
}
