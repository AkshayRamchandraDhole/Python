
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0;
	char temp[100],*t = NULL, word[100];
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;

		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}

	}
	t = strtok(str, " ");
	strcpy(temp, t);
	int min = strlen(temp);
	while(t != NULL){
		strcpy(temp, t);
		if(min > strlen(temp)){
			strcpy(word, temp);
			min = strlen(temp);
		}
		
		t = strtok(NULL, " ");
	}
	printf("%s\n",word);

}
