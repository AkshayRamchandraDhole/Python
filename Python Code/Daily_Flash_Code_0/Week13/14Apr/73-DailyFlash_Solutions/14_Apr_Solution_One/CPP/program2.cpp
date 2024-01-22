
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0;
	char ch;
	std::cout << ("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}
	}
	len = strlen(str);
	std::cout << "Enter Index : ";
	std::cin >> k;
	if(k >= len)	{
		std::cout << "Index can't be grater than string\n";
		return 0;
	}
	str[k] = '\0';
	char *temp = str+k+1;
	std::cout << (str) << temp << std::endl;
}
