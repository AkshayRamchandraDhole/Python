#include<stdio.h>

int main(void) {
	
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	while(num >= 0) {
		if(num % 2 == 0)
			printf("%d ", num);
		num--;
	}
	return 0;
}
