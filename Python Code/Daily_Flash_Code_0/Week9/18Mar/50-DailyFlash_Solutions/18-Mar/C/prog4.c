#include<stdio.h>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf(" ");
			} else {
				if(j % 2 == 0)
					printf("*");
				else
					printf("0");
			}
		}
		printf("\n");
	}
}
