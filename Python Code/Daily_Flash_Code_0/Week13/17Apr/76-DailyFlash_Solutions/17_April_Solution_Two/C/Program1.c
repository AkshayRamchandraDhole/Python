#include <stdio.h>

char* cat(char* str1,char* str2){

	char* ch = str1;
	while(*ch != '\n'){

		ch++;
	}
	while(*str2 != '\n'){

		*ch = *str2;
		ch++;
		str2++;
	}
	*ch = '\0';
	return str1;
}

int main() {

	char inp[100] = {'\0'};
	char copy[100] = {'\0'};

	printf("Input a string 1\n");
	fgets(inp,sizeof(inp),stdin);

	printf("Input a string 2\n");
	fgets(copy,sizeof(copy),stdin);

	char *str3 = cat(inp,copy);

	printf("%s\n",str3);
	return 0;
}
