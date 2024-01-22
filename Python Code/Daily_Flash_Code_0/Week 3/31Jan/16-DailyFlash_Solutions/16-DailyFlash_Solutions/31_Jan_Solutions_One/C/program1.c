#include<stdio.h>


void main(){

	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	int temp = 1;
	for(int itr = 0 ;itr <num;itr++){
		
		printf("%d\n",temp);
		temp = temp + num;
		
		
	}	
		

}	
