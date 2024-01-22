#include<iostream>


int main(){
	
	int oddCount=0,evenCount=0,num;

	printf("Enter the number : ");
	scanf("%d",&num);

	int rem;
	while(num!=0){
		
		rem = num%10;

		rem%2==0?evenCount++:oddCount++;

		num = num/10;

	}	

	printf("Even count %d\n",evenCount);
	printf("Odd count %d\n",oddCount);


}	
