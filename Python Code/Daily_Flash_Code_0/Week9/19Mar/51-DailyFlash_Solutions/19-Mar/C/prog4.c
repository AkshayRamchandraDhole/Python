#include<stdio.h>

int main() {
	int num = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf(" ");
			} else {
				if(i % 2 == 0) {
					printf("%d", num);
					num++;
					if(j == 6 - i)
						num--;
				}

				else {
					printf("%d", num);
					num--;
					if(j == 6 - i)
						num++;
				}
			}
		}
		printf("\n");
	}
}
