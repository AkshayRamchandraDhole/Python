#include<stdio.h>
#include<string.h>

#include<stdlib.h>

void main(){

	char hex[65];
	
	scanf("%s",hex);
	
	int len = strlen(hex);

	printf("%d\n",len);
	printf("%s\n",hex);
	int base = 1;
	int decNum =0 ;
	for (int itr = len-1;itr>=0;itr--){
		
		if(hex[itr]>='0'&& hex[itr]<='9'){

			decNum = decNum + (hex[itr]-48)*base;
		}	
		else if(hex[itr]>='A'&&hex[itr]<='F'){
			
			decNum = decNum +(hex[itr]-55)*base;

		}	

		base = base * 16;


	}	


	printf("Decimal %d",decNum);

}	
