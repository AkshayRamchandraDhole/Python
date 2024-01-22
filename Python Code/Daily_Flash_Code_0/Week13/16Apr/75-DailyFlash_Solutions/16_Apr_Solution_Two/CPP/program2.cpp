
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main () {
	int k = 0, len = 1,i;
	char ch, *str = (char *)malloc(sizeof(char)*len);
	std::cout << ("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = (ch >= 65 && ch <= 90)? ch +32 : (ch >= 97 && ch <= 122)?ch - 32:ch;
		if(k == len){
			len += 2;
			str = (char  *)realloc(str, len);
		}
	}
	std::cout << (str) << std::endl;
}
