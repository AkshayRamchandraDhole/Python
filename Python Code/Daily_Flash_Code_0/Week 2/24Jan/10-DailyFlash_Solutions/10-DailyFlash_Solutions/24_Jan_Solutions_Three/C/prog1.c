#include<stdio.h>

int main(void) {
	for(int i = 0; i < 100; i++) {
		if((i + 1) % 3 == 0 || (i + 1) % 5 == 0) {
			printf("%d ", (i + 1));
		}
	}
	return 0;
}
