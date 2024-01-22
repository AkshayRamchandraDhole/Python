
#include <iostream>
#include<string.h>

int main() {

	char num[10];
	fgets(num, 10, stdin);
	int i = 0, dec = 0;
	while(num[i] !='\0' && num[i] != '\n'){
		if(num[i]>'F'){
			std::cout << ("Not a hexadecimal Number\n");
			exit(0);
		}
		dec = dec * 16 + ((num[i] <= '9')?(num[i]-'0'):(num[i]-55));
		i++;
	}
	std::cout << (dec) << "\n";
}

