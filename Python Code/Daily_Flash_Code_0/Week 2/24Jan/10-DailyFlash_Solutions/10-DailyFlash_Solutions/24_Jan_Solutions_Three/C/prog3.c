#include<stdio.h>

int main(void) {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);	
	for(int i = 1; i <= num ; i++) {
		if(i % 2 == 1)
			printf("Cube of %d : %d\n", i, i * i * i);
	}
	return 0;
}
