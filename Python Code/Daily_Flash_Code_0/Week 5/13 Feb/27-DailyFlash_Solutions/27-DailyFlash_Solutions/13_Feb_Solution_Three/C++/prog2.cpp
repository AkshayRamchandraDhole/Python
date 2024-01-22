#include<iostream>
#include<string.h>

int main() {
	char hex[10];
	std::cout << "Enter hex : ";
	std::cin.getline(hex, sizeof(hex));
	int len = strlen(hex);
	int k = 0;
        while(k < len) {
                if(!((hex[k] >= '0' && hex[k] <= '9') || (hex[k] >= 'A' && hex[k] <= 'F'))) {
			std::cout << "Enter valid hex";
                        exit(1);
                }
                k++;
        }
	int d = 0, num, i = 0;
	while(len > 0) {
		num = hex[i] - 48 <= 9 ? hex[i] - 48 : hex[i] - 55;
		d = d * 16 + num;
		len--;
		i++;
	}
	std::cout << "dec : " << d;
	return 0;
}
