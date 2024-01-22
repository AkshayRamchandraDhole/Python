#include<iostream>

int main() {
	double m, v;
	std::cout << "Enter mass : ";
	scanf("%lf", &m);
	std::cout << "Enter vel : ";
	scanf("%lf", &v);
	if(m >= 0 && v >= 0) { 
		std::cout << "K.E = " << m * v * v / 2 << "\n";
	} else {
		std::cout << "Enter valid det.";
	}
	
	return 0;
}
