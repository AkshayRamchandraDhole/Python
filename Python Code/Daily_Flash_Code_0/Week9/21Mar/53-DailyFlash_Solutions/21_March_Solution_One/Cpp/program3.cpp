#include<iostream>


int main(){
	
	int len;

	int arr[100];

	printf("Enter the length : ");
	scanf("%d",&len);


	for(int itr = 0; itr<len;itr++){
		
		scanf("%d",arr+itr);
	
	}	
	
	int sum = 0;
	for(int itr = 0;itr<len;itr++){
		
		sum = sum + arr[itr];
	}	

	printf("Sum = %d\n",sum);

	printf("Avg = %f",(float) sum/len);

}	
