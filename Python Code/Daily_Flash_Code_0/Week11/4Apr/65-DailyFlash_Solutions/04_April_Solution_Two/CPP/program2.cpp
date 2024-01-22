
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0,cnt = 0, a, e, i, o, u;
	a = e = i = o = u = 0;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(ch == 'A' || ch == 'a'){
			a++;
		}
		else if(ch == 'E' || ch == 'e'){
			e++;
		}
		else if(ch == 'I' || ch == 'i'){
			i++;	
		}
		else if(ch == 'O' || ch == 'o'){
			o++;	
		}
		else if(ch == 'u' || ch == 'U'){
			u++;	
		}
		if(k == len){
			len = len + 8;
			str = (char *)realloc(str, len);
		}

	}
	std::cout << "a : " << a << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "i : " << i << std::endl;
	std::cout << "o : " << o << std::endl;
	std::cout << "u : " << u << std::endl;

}
