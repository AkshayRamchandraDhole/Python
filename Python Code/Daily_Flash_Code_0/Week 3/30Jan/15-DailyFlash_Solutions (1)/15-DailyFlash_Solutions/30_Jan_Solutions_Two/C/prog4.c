#include<stdio.h>

int main(void) {
	int var = 7;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			if(j > 0)
				var--;
			printf("%d ", var);
		}
		printf("\n");
	}
	return 0;
}
