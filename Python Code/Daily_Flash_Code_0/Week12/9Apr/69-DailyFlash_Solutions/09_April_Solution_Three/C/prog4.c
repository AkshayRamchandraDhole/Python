#include<stdio.h>

int main() {
	int ch = 'A';	
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				printf("%c", ch);
			}
			ch++;
			if(i == 3)
				ch--;
		} else {
			ch--;
			for(int j = 0; j < 7 - i; j++) {
				printf("%c", ch);
			}
		}
		printf("\n");
	}
}
