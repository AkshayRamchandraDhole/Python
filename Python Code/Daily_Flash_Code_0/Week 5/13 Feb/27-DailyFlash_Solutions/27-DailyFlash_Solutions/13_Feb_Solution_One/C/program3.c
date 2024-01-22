#include<stdio.h>


void main(){

	int num;
	
	printf("Enter the number\n");
	scanf("%d",&num);

	int rem  = 0;
	int sum = 0;
	while(num!=0){
	
		rem =num%10;
		sum =sum+rem;

		num = num/10;	
	}		

	printf("Sum of the digits %d",sum);


}	
