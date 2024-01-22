#include<stdio.h>

int main() {
	int ch = 8;
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				printf("%d", ch);
			}
			ch-=2;
			if(i == 3)
				ch+=2;
		} else {
			ch+=2;
			for(int j = 0; j < 7 - i; j++) {
				printf("%d", ch);
			}
		}
		printf("\n");
	}
}
