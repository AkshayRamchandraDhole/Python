#include<iostream>

int main(){
		
	int num1,num2,num3;

	printf("Enter the number 1 : ");
	scanf("%d",&num1);

	printf("Enter the number 2 : ");
	scanf("%d",&num2);

	printf("Enter the number 3 : ");
	scanf("%d",&num3);

	if(num1<num2 && num1<num3)
		printf("%d is minimum\n",num1);
	else if(num2<num1 && num2<num3)
		printf("%d is minimum\n",num2);
	else if(num3<num1 && num3<num2)
		printf("%d is minimum\n",num3);
}	
