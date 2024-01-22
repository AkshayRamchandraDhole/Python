#include<stdio.h>


void main(){
	
	char octal[250];

	fgets(&octal,50,stdin);

	int itr= 0;
	while(octal[itr]!='\n'){
		
		if(octal[itr]=='0')
			printf("000");
		else if(octal[itr]=='1')
			printf("001");
		else if(octal[itr]=='2')
			printf("010");
		else if(octal[itr]=='3')
			printf("011");
		else if(octal[itr]=='4')
			printf("100");
		else if(octal[itr]=='5')
			printf("101");
		else if(octal[itr]=='6')
			printf("110");
		else if(octal[itr]=='7')
			printf("111");
		else {
			printf("Invalid number in ocatl");
			break;		
		}

		itr++;
	}	

}	
