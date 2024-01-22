#include<stdio.h>

void main(){

	int row;
	printf("Enter the row : ");
	scanf("%d",&row);

	for(int olc=0;olc<row;olc++,printf("\n")){
	
		for(int ilc = 0;ilc<(row*2-1)-olc;ilc++){
		
			if(ilc>=olc){
				if(ilc < row)
					printf("%d\t",(row*2-ilc));
				else
					printf("%d\t",((row*2)-((row*2)-ilc)+2));
			}else{
			
				printf("\t");
			}
		}
	}	
}

