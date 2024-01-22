#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'};

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);

	char copy[100];
	int start = 0,end = 0;
	printf("Enter Start and End Index\n");
	scanf("%d %d",&start,&end);
	for(int i = start,j = 0; i <= end; i++,j++){

		copy[j] = inp[i];
	}
	
	printf("Output String is %s\n",copy);

	return 0;
}
