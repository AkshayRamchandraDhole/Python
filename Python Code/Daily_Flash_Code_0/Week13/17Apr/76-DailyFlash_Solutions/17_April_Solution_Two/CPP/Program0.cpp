#include <stdio.h>

int cmp(char* str1,char* str2){

	while( *str1 != '\n' || *str2 != '\n'){

		if(*str1 != *str2){

			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return 0;
}

int main() {

	char inp1[100] = {'\0'};
	char inp2[100] = {'\0'};

	printf("Input a string 1\n");
	fgets(inp1,sizeof(inp1),stdin);

	printf("Input a string 2\n");
	fgets(inp2,sizeof(inp2),stdin);

	int cm = cmp(inp1,inp2);

	if(cm == 0){

		printf("Strings are Equal\n");
	}
	else{

		printf("String differ by %d\n",cm);
	}

	return 0;
}
