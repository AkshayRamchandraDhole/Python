#include<stdio.h>

int main() {
	int num, f = 0;
	do {
		if(f > 0)
			printf("%d\n", num * num);
		scanf("%d", &num);
		f = 1;
	} while(num >= 0);
	return 0;
}
