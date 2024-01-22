#include<stdio.h>

int main() {
	int num = 1;
	char ch = 'A';
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < 4 + i; j++) {
				if(j < 3 - i)
					printf(" ");
				else {
					if(i % 2 == 0) {
						printf("%d",num);
					} else {
						printf("%c", ch);
					}

				}
			}
			num++;
			if(i % 2 == 1)
				ch++;
			if(i == 3)
				num--;
		}
		else {
			num--;
			if(i%2 == 1);
			ch--;
			for(int j = 0; j < 10 - i; j++) {
				if(j < i - 3)
					printf(" ");
				else
					if(i % 2 == 0)
						printf("%d", num);
					else
						printf("%c", ch);
			}	
		}
		printf("\n");
	}
}
