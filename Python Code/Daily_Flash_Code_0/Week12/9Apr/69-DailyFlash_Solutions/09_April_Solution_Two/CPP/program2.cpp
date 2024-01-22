
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	char *substr = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0, cnt = 0;
	char ch;
	std::cout << ("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}
	}
	str[strlen(str)] = '\0';
	len = strlen(str);
	for(int i = 0 ; i < len/2; i++){
		if(str[i] != str[len-1-i]){
			std::cout << ("Not Palindrome\n");
			return 0;
		}

	}
	std::cout << "Palindrome\n";

}
