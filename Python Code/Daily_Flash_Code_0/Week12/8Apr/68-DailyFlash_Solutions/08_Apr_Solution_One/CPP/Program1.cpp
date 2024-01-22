#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(){

	printf("Enter a String\n");

	char arr[300] = {'\0'};
	fgets(arr,sizeof(arr),stdin);

	printf("Enter a Sub-String\n");

	char sub[300] = {'\0'};
	fgets(sub,sizeof(sub),stdin);

	if (strlen(sub)  > strlen(arr)){

		printf("Length of Substring is Greater than Source string");
		exit(0);
	}

	for(int i=0; arr[i]!='\0'; i++){

		if(arr[i] == sub[0]){

			for(int j = 0,k = i; sub[j] != '\0'; j++,k++){
				if(arr[k] == sub[j]){

					if(sub[j] == '\n'){

						printf("The SubString %s is Present in the Input String\n",sub);
					}
				}
				else
					break;
			}
		}

	}
	
	return 0;
}
