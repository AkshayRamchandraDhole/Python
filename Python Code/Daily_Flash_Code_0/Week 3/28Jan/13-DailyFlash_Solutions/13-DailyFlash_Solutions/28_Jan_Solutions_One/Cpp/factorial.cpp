#include<iostream>

int main(){
	
	int num1,num2;

	printf("Enter the lowerlimit : ");
	scanf("%d",&num1);

	printf("Enter the upperlimit : ");
	scanf("%d",&num2);

	
	for(int  itr = num1 ; itr<=num2 ; itr++){
		
		int fact = 1;

		for(int inner = 1 ; inner<=itr ; inner++)
			fact = fact*inner;

		printf("Factorial of %d is %d\n ",itr,fact);		


	}	

}	
