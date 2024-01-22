#include<stdio.h>

int main() {
	int num, f = 0, fact = 1;
	do {
		if(f > 0)
			printf("%d\n", fact);
		fact = 1;
		scanf("%d", &num);
		for(int i = 1; i <= num; i++) {
			fact *= i;
		}
		f = 1;
	} while(num >= 0);
	return 0;
}
