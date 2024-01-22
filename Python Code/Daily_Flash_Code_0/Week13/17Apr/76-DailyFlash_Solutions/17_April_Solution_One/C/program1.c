
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	int k = 0, len = 1;
	char ch;
	char *str = (char *)malloc(sizeof(char)*len);
	char *substr = (char *)malloc(sizeof(char)*len);
	printf("Enter String 1 : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len += 2;
			str = (char *)realloc(str, len);
		}
	}
	len = 1;
	k = 0;
	printf("Enter String 2 : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		substr[k++] = ch;
		if(k == len){
			len += 2;
			substr = (char *)realloc(substr, len);
		}
	
	}
	str[strlen(str)] = '\0';
	substr[strlen(substr)] = '\0';
	int len2 = strlen(substr);
	int len1 = strlen(str),i;
	for(i = 0; i < len2-1 && len1-1; i++){
		if(str[i] != substr[i]){
			printf("Not equal and Difference : %d\n",(str[i] - substr[i]));
			return;
		}
	}
	printf("Not Equal and Difference : %d\n", (int)(str[i] - substr[i-1]));
}
