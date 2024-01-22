#include<stdio.h>

int main(void) {
	int num = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%d ", num * num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
