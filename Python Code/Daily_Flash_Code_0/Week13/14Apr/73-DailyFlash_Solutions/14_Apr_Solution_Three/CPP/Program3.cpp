#include<stdio.h>

int main(){

	int row;
	printf("Enter the rows : ");
	scanf("%d",&row);
	int m = row/2;
	char ch = 64;

	for(int olc = 0; olc < row; olc++){


		for(int ilc = 0; ilc < row; ilc++){

			if((olc+ilc < m && olc < m) || (olc-ilc > m) || (ilc-olc > m && olc < m) || olc+ilc >= row+m){

				printf("\t");
			}else if(olc <= m){

				if(olc%2 != 0){

					printf("%c\t",ch+olc);
				}
				else {
					printf("%d\t",olc+1);
				}
			}
			else{

				if(olc%2 != 0){

					printf("%c\t",ch+((2*m)-olc+2));
				}
				else {
					printf("%d\t",(2*m)-olc+1);
				}
			}
		}
		printf("\n");
		if(olc <= m && olc%2 != 0)
			ch--;
		else if(olc > m && olc%2 != 0)
			ch++;

	}	
	return 0;
}
