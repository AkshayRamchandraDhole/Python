#include<stdio.h>


void main(){

	int num ;

	printf("Enter the number");
	scanf("%d",&num);
	int rem;
	int rev=0;
	int base=1;
	while(num!=0){
		
		rem = num%10;
		
		rev = rev + rem*base;
		
		base  = base*8;	

		num = num/10;	

	}	

	printf("%d",rev);

	
}	
