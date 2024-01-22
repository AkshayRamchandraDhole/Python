
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}

	}
	for(int i = 0; i < strlen(str); i++){
		if((str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') &&(str[i-1] == 'A' || str[i-1] == 'a' || str[i-1] == 'E' || str[i-1] == 'e' || str[i-1] == 'I' || str[i-1] == 'i' || str[i-1] == 'o' || str[i-1] == 'O' || str[i-1] == 'u' || str[i-1] == 'U')){

			std::cout << str[i-1] << str[i] << std::endl;
		}	
	}

}
