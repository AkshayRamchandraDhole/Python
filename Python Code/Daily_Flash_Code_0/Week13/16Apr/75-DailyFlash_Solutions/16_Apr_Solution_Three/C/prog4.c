#include<stdio.h>

int main() {
	char ch = 'A';
	for(int i = 0; i < 7; i++) {
		if(i>0)
			ch--;
		if(i < 4) {
			for(int j = 0; j < 4 + i; j++) {
				if(j < 3 - i)
					printf(" ");
				else {
					if(i % 2 == 0) {
						if(j % 2 == 1) {
							printf("%c", ch);
							ch++;
						}
						else
							printf(" ");
					} else {
						if(j % 2 == 0) {
							printf("%c", ch);
							ch++;
						}
						else
							printf(" ");
					}

				}
			}
		}
		else {
			for(int j = 0; j < 10 - i; j++) {
				if(j < i - 3)
					printf(" ");
				else {
					if(i % 2 == 0) {
						if(j % 2 == 1) {
							printf("%c", ch);
							ch++;
						}
						else
							printf(" ");
					} else {
						if(j % 2 == 0) {
							printf("%c", ch);
							ch++;
						}
						else
							printf(" ");
					}
				}
			}	
		}
		printf("\n");
	}
}
