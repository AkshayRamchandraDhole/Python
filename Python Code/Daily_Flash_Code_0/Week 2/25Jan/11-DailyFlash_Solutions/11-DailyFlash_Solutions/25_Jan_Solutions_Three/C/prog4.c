#include<stdio.h>

int main(void) {
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j <= i; j++) {
			i % 2 == 0 ? printf("a ") : printf("A ");
		}
		printf("\n");
	}
	return 0;
}
