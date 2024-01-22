
#include <iostream>
#include <stdlib.h>

int isPali(int n) {
	int rev = 0, temp = n;
	while(n!=0){
		rev = rev * 10 + n%10;
		n /= 10;
	}	
	if(temp == rev)
		return 1;
	else
		return 0;
}
int main () {

	int n;
	std::cout << ("Enter length of Array : ");
	std::cin >> n;

	int *arr = new int[n];
	for(int i = 0; i < n ; i++){
		std::cin >> arr[i];
	}
	for(int i = 0; i < n ; i++){
		if(isPali(arr[i])){
			std::cout << arr[i] << " ";
		}
	}	
	std::cout << std::endl;
}
