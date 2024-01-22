#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);

	for(int i = 2; i <= num / 2; i++) {
		if(num % i == 0)
			printf("%d ", i);
	}

	return 0;
}
