
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main () {

	int n;
	double avg,sum,var,sd;
	std::cout << ("Enter length of Array : ");
	std::cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n ; i++){
		std::cin >> arr[i];
		sum += arr[i];
	}
	avg = sum/n;
	sum = 0;
	for(int i = 0; i < n ; i++){
		sum += (arr[i]-avg)*(arr[i]-avg);
	}	
	var = sum/n;
	sd = sqrt(var);
	std::cout << ("Avg : ") << (avg) << "\n";
	std::cout << ("Var : ") << (var) << "\n";
	std::cout << ("SD : ") << (sd) << "\n";
	
}
