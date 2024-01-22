#include<stdio.h>

int main(void) {
	char ch;
	for(int i = 0; i < 4; i++) {
		ch = 'A';
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j >= 3 - i) {
					printf("%c", ch);
					ch++;
				} else {
					printf(" ");
				}
			} else {
				if(j < 4 + i) {
					printf("%c", ch);
					ch++;
				}
			}
		}
		printf("\n");
	}
}
