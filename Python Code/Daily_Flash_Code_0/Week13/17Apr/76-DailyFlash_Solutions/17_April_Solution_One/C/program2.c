
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	int k = 0, len = 1,i;
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
	len = strlen(str);
	str = realloc(str, strlen(substr) + len + 1);
	strcpy(str + len, substr);
	str[strlen(str) + 1] = '\0';
	printf("%s\n", str);
}
