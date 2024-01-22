#include <stdio.h>
#include <string.h>

void main() {


	char inp[50] = {'\0'};
	printf("Enter a String\n");
	fgets(inp,sizeof(inp),stdin);

	printf("Length of String is %ld\n",strlen(inp));
	return 0;
}
