#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'};
	char copy[100] = {'\0'};

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);



	for(int i = 0,j = 0; inp[i] != '\n' ; i++,j++){

		if(inp[i] >= 65 && inp[i] <= 90){

			copy[j] = inp[i]+32;
		}
		else if(inp[i] >= 97 && inp[i] <= 122){

			copy[j] = inp[i]-32;
		}
		else
			copy[j] = inp[i];
	}
	printf("Output String is \n%s\n",copy);


	return 0;
}
