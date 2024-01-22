#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'}, rev[100] = {'\0'};
	int begin, end, count = 0;

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);

	int len = strlen(inp) - 2;
	int last = len;

	for (int i = 0; i <= last; i++) {
		rev[i] = inp[len];
		rev[i+1] = '\0';
		len--;
	}

	printf("%s\n", rev);

	return 0;
}
