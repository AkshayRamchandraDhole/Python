#include<stdio.h>

int main() {

	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 5; j++) {
			if(i < 5) {
				if(j < 4 - i)
					printf(" ");
				else {
					if(j == 4)
						printf("O");
					if(j == 2 || j == 3)
						printf("L");
					if(j == 0)
						printf("H");
					if(j == 1)
						printf("E");
				}
			} else {
				if(j < i - 4)
					printf(" ");
				else { 	
					if(j == 4)
                                                printf("O");
                                        if(j == 2 || j == 3)
                                                printf("L");
                                        if(j == 0)
                                                printf("H");
                                        if(j == 1)
                                                printf("E");
                                }

			}
		}
		printf("\n");
	}
}
