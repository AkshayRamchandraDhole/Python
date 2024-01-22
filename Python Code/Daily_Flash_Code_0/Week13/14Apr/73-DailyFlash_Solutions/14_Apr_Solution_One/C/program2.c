
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0,ind;
	char *temp = NULL;
	char ch;
	printf("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}
	}
	printf("Enter index : ");
	scanf("%d", &ind);
	len = strlen(str);	
	if(ind >= len){
		printf("Index can't be grater than or equal to string length\n");
		return;
	}
	str[ind] = '\0';
	temp = (str+ind+1);
	printf("%s%s\n",str,temp);
}
