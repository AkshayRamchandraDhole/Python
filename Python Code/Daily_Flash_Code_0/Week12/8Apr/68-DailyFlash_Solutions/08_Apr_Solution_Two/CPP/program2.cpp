
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
	std::cout << ("Enter substring : ");
	k = 0;
	len =  1;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		substr[k++] = ch;
		if(k == len){
			len = len + 8;
			substr = (char *)realloc(substr, len);
		}
	}

	//std::cout << ("%s : %ld\n", str, strlen(str));
	//std::cout << ("%s : %ld\n", substr, strlen(substr));
	int i, flag = 0;
	k = 0;
	cnt = strlen(str);
	for(i = 0; i < cnt; ){
		if(strlen(substr) == k){
			std::cout << ("substring found\n");
			flag = 1;
			break;
		}
		else if(k == 1 && str[i] == substr[k-1] && substr[k-1] != substr[k]){
			i++;

		}
		else if(str[i] == substr[k]){
			i++;
			k++;
		}
		else{
			i++;
			k = 0;
		}
	}
	if(strlen(substr) == k && i == strlen(str)){
		std::cout << ("substring found\n");
	}
	else if(flag == 0){
		std::cout << ("substring not found\n");
	}
}
