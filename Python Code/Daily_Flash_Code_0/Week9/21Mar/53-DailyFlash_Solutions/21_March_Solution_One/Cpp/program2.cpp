#include<iostream>
#include<string.h>

int main(){
	
	char ch[50];

	char *input = ch;

	printf("Enter the String :\n");

	fgets(input,50,stdin);


	while(*input!='\0'){
		
		switch(*input){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("%c",*input);	

		}	
		input++;
		
	}


}	
