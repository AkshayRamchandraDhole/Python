#include<stdio.h>

void main(){

	int row;
	printf("Enter the rows : ");
	scanf("%d",&row);
	int m = row/2;

	for(int olc = 0; olc < row; olc++){

		for(int ilc = 0; ilc < row; ilc++){

			if((olc+ilc < m && olc < m) || (olc-ilc > m) || (ilc-olc > m && olc < m) || olc+ilc >= row+m){

				printf("\t");
			}else if(olc <= m){

				printf("%d\t",olc+1);
			}
			else{

				printf("%d\t",(2*m)-olc+1);
			}
		}
		printf("\n");
	}	
}

