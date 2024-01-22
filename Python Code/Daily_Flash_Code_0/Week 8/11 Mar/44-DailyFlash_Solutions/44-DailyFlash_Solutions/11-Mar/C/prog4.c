#include<stdio.h>

int main(void) {
	int a = 0, b = 1, c = 0;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j >= 3 - i) {
					if(i == 0) {
						printf("%d\t", a);
					}
					else if(i == 1 && j == 2) {

						printf("%d\t", b);
					}
					else {
						c = a + b;
						printf("%d\t", c);
						a = b;
						b = c;	
					}
					
				} else {
					printf("\t");
				}
			} else {
				if(j < 4 + i) {
					c = a + b;
					printf("%d\t", c);
					a = b;
					b = c;
				}
			}
		}
		printf("\n");
	}
}
