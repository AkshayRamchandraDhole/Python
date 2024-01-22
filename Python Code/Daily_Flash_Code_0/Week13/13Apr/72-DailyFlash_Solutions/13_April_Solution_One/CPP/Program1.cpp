#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'};

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);

	int l = strlen(inp) -2;
	char copy[100];
	for(int i = l,j = 0; i >= 0, j <= l; i--,j++){

		copy[j] = inp[i];
	}
	
	printf("Output String is \n%s\n",copy);
	return 0;
}
