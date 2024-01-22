#include<stdio.h>

int main() {
	int num;
	for(int i = 0; i < 4; i++) {
		num = i * (i + 1);
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				printf("\t");
			} else {
				printf("%d\t",num);
				num++;
			}
		}
		printf("\n");
	}
}
