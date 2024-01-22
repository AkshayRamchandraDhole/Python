
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0, cnt = 0;
	char ch;
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}

	}
	printf("Enter cahracter : ");
	scanf("%c", &ch);
	cnt = 0;
	for(int i = 0 ; i < strlen(str); i++){
		if(ch == str[i])
			cnt++;
	}
	printf("Occurrence of %c : %d\n",ch, cnt);

}
