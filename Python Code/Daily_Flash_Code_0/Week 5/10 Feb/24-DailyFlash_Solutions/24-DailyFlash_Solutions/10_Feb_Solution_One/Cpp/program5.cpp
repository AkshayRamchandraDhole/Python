#include<iostream>



int main(){

	
	int num = 0;
	printf("Enter the number ");

	scanf("%d",&num);

	int count=0;
	while(num!=0){
		
		num = num/10;
		count++;
	}	

	printf("Count of digit is %d",count);
}	
