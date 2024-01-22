
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0,cnt = 0;;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}

	}
	std::cout << "Enter character : ";
	std::cin >> ch;
	for(int i = 0; i < strlen(str); i++){
		if(ch == str[i])
			cnt++;
	}
	std::cout << "Occurrence of  : " << ch << " : "  << cnt << std::endl;

}
