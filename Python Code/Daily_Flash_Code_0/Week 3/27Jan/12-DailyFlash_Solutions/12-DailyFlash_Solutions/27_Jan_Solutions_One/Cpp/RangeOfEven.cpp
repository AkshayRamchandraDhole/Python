#include<iostream>

int main(){

	
	int lowerlimit;
	int upperlimit;


	printf("Min of Series : ");
	scanf("%d",&lowerlimit);

	printf("Max of Series : ");
	scanf("%d",&upperlimit);

	printf("Series Of Even number's ranging from %d & %d is : ",lowerlimit,upperlimit);
	for(int itr = lowerlimit ; itr < upperlimit ; itr++){
		if(itr%2==0)
			printf("%d ",itr);	

	}	

}		
