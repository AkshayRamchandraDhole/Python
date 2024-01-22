#include<stdio.h>

int main() {
	int ch = 8;
	for(int i = 0; i < 4; i++) {
		int num = 8 - i;
		for(int j = 0; j < 7 - i; j++) {
			if(j < i)
				printf(" ");
			else {
				if(j < 4) {
					printf("%d", num);
					num--;
					if(j == 3)
						num++;
				} else {
					num++;
					printf("%d", num);
				}
			}
		}
		printf("\n");
	}
}
