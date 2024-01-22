
#include<iostream>

int main(){
	
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	for(int itr =10;itr>0;itr--){
		
		printf("%d x %d = %d\n",num,itr,num*itr);
	}	
}	
