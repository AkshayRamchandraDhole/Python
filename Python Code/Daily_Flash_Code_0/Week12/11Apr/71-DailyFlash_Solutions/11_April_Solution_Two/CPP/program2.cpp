
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0, cnt = 0,s,e;
	char ch;
	std::cout << ("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}
	}
	str[k] = '\0';
	std::cout << ("Enter Start and End Index : ");
	std::cin >> s >> e;
	char *dest = (char *)malloc(e-s+1);
	len = 0;
	int i;
	std::cout << (str) << std::endl;
	for(i = s; i <= e && i <=k; i++){
		dest[i-s] = str[i];
	}
	
	std::cout << (dest) << std::endl;
}
