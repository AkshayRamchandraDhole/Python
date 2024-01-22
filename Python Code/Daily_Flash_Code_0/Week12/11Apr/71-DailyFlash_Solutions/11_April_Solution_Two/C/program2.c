
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
	
	char *str = (char *)malloc(sizeof(char)*1);
	int len = 1, k = 0, cnt = 0,s,e;
	char ch;
	printf("Enter String : ");
	while(EOF != (ch = fgetc(stdin)) && ch != '\n'){
		str[k++] = ch;
		if(k == len){
			len = len + 8;
			str = realloc(str, len);
		}
	}
	str[k] = '\0';
	printf("Enter Start and End Index : ");
	scanf("%d%d", &s,&e);
	char *dest = (char *)malloc(e-s+1);
	len = 0;
	int i;
	printf("%s\n",str);
	for(i = s; i <= e && i <=k; i++){
		dest[i-s] = str[i];
	}
	
	printf("%s\n",dest);
}
