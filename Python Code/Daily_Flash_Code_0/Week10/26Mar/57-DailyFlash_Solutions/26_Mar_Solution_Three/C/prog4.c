#include<stdio.h>

int main() {
	
	for(int i = 0; i < 7; i++) {

		if(i < 4) { 
			for(int j = 0; j < i + 1; j++) {
				if(j==0)
					printf("H");
				if(j == 1)
					printf("E");
				if(j == 2 || j == 3)
					printf("L");
			}
		} else {
			for(int j = 0; j < 7 - i; j++) {
				
				if(j==0)
					printf("H");
				if(j == 1)
					printf("E");
				if(j == 2 || j == 3)
					printf("L");
			}
		}
		printf("\n");
	}
}
