#include<iostream>


int main(){
	

	int num ;

	printf("Enter the number : ");
	scanf("%d",&num);


	for(int itr = num ; itr>0 ; itr--){

		if(itr%2==0)
			printf("%d\t",itr);
	}	
	
}	
