#include<stdio.h>

int main(void) {
	printf("First 50 even numbers are : ");
	for(int i = 0; i < 100; i++) {
		if((i + 1) % 2 == 0) 
			printf("%d ", i + 1);
	}
	return 0;
}
