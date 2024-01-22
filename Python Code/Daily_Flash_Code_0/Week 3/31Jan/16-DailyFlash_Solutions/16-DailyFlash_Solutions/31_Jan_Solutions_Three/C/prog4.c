#include<stdio.h>

int main() {
	int num;
	for(int i = 0; i < 4; i++) {
		num = 7 - i;
		for(int j = 0; j <= i; j++) {
			printf("%d ", num);	
			num--;
		}
		printf("\n");
	}
	return 0;
}
