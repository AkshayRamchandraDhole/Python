#include<stdio.h>

int main() {
	int num;
	for(int i = 0; i < 7; i++) {
		if(i < 4)
			num = i + 1;
		else
			num = 7 - i;
		if(i < 4) {
			for(int j = 0; j < 4 + i; j++) {
				if(j < 3 - i)
					printf(" ");
				else {
					printf("%d",num);
				}
			}
		}
		else {
			for(int j = 0; j < 10 - i; j++) {
				if(j < i - 3)
					printf(" ");
				else
					printf("%d", num);		
			}	
		}
		printf("\n");
	}
}
