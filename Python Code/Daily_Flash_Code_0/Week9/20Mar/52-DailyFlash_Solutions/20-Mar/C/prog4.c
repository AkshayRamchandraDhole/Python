#include<stdio.h>

int main() {
	int num = 1;
	char ch = 'A';
	for(int i = 0; i < 4; i++) {
		num = i * 2;
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf("\t");
			} else {
				printf("%c%d\t", ch, num);
				ch++;
				num++;
			}
		}
		printf("\n");
	}
}
