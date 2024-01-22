#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'};

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);

	int rm = 0;
	printf("Enter a Index to remove character \n");
	scanf("%d",&rm);

	char copy[100];
	for(int i = 0,j = 0; inp[i] != '\n'; i++,j++){
	
		if(i == rm){
			j--;
		}else
			copy[j] = inp[i];
	}
	
	printf("Output String is \n%s\n",copy);
	return 0;
}
