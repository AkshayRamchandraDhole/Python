
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0;
	char ch;
	printf("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}
	}
	len = strlen(str);
	for(int i = 0; i <= len/2; i++){
		str[i] = str[len-i-1] + str[i] - (str[len-1-i] = str[i]);
	}
	
	printf("%s\n",str);
}
