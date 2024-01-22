#include<stdio.h>


void main(){

	int num;
	printf("Enter the length ");
	scanf("%d",&num);

	int sum = 0;
	while(num!=0){
		

		sum = sum + power(num,num*num-1);

		num--;

	}	

	printf("Sum = %d",sum);
		


}	


int power(int lower,int upper){
	
	int pow = lower;

	while(upper!=0){

		pow = pow*lower;
		upper--;
	}	

	printf("power = %d",pow);

	return pow;



}	
