#include<iostream>
#include<string.h>

int main() {
	
	char arr[10];
	printf("Enter octal : ");
	std::cin.getline(arr, sizeof(arr));
	int len = strlen(arr);
	int i = 0;
	int dec = 0;
	int num;
	while(1) {
		if(i > len - 1)
			break;
		num = arr[i] - 48;
		dec = dec * 8 + num;
		i++;
	}	
	std::cout << "Decimal : " << dec;
	return 0;
}	
