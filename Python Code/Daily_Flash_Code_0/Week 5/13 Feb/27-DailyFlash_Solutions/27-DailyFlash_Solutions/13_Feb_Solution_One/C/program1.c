#include<stdio.h>


void main(){

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);


	int rem = 0;
	int sum =0,fact = 1;
	int temp = num;
	while(num!=0){
		
		rem = num%10;
		fact = 1;
		for(int itr = 2 ; itr<=rem; itr++){
			
			fact = fact*itr;

		}	

		sum = sum+fact;
		num = num/10;	
	}	

	if(sum==temp){
		
		printf("The number is Strong number");
	}else{
		
		printf("The number is not Strong number");
	}		
	


	
	
}	
