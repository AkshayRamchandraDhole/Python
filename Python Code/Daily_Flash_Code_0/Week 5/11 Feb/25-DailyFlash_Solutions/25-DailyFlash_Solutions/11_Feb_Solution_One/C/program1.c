#include<stdio.h>


void main(){
	
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	int sum = 0;
	for (int itr =1 ; itr <= num/2 ; itr++){

		if(num%itr==0){
			sum = sum+itr;
		}	
	}	

	if(sum < num){
		
		printf("The number is deficient \n");
	}else{
		printf("The number is not deficient  \n");
	}	

}	