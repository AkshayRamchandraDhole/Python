#include<stdio.h>


void main(){

	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	int rem=0;
	int count=0;
	while(num!=0){
		
		rem = num%10;
		if(rem%2==0)
			count++;

		num = num/10;
	
	}	

	printf("%d",count);

}	
