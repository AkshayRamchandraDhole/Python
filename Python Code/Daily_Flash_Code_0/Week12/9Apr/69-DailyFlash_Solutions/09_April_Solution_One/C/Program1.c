#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'}, rev[100] = {'\0'};
	int begin, end, count = 0;

	printf("Input a string\n");
	scanf("%s",inp);

	int len = strlen(inp) - 1;
	int last = len;	

	for (int i = 0; i <= last; i++) {
		rev[i] = inp[len];
		rev[i+1] = '\0';
		len--;
	}

	if(!strcmp(inp,rev))
		printf("Pallindrome\n");

	return 0;
}
