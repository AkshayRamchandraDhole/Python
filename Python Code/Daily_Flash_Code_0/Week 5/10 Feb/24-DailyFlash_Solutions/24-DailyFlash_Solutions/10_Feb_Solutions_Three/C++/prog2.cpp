#include<iostream>
#include<string.h>
int main(void) {
	char arr[10];
	int bin[3];
	std::cout << "Enter octal num : ";
	std::cin.getline(arr, sizeof(arr));
	int n, k, rem;
	int len = strlen(arr);
	for(int i = 0; i < len; i++) {
		n = arr[i] - 48;
		k = 0;
		bin[2] = 0;
		bin[1] = 0;
		bin[0] = 0;
		while(n != 0) {
			rem = n % 2;
			bin[k] = rem;
			k++;
			n = n / 2;
		}
		std::cout << bin[2] << bin[1] << bin[0];	
	}
}
