
#include <iostream>
#include <stdlib.h>
int main() {
	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	int temp = n, cnt = 0;
	while(n != 0){
		cnt++;
		n = n / 10;
	}
	int *arr = new int[cnt];
	cnt = 0;
	while(temp != 0 ){
		arr[cnt] = temp % 10;
		temp = temp  / 10;
		cnt++;
	}
	for(int i = 0; i < cnt; i++){
		std::cout << (*(arr + i)) << " ";
	}
	std::cout << ("\n");
}
