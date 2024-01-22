
#include<iostream>


int main(){


	int num ; 

	printf("Enter the number\n");
	scanf("%d",&num);

	int sum = 0;
	for(int itr = 1 ; itr<=num ; itr++){

		sum = 0;
		for(int jtr = 1 ; jtr<=itr/2 ; jtr++){

			if(itr%jtr==0)
				sum = sum + jtr;

		}

		if(itr == sum || itr == 1)
			printf("%d is Perfect\n",itr);
	}	

}	
