#include<stdio.h>

void main(){
	
	int num = 3;
	for(int itr = 0 ;itr<4;itr++){
		
		for(int jtr = 0 ;jtr<=itr ; jtr++ ){
			
			printf("%d\t",num);
			num++;
		}
		printf("\n");
		num = num-(itr+2);	
			
	}	
}	
