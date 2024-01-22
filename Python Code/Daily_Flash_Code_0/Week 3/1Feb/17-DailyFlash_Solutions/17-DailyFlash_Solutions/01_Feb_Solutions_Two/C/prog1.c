#include<stdio.h>

int main(void) {
	int num;
	printf("num : ");
	scanf("%d", &num);
	for(int i = num; i > 0; i--) {
		if(i % 2 == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}
