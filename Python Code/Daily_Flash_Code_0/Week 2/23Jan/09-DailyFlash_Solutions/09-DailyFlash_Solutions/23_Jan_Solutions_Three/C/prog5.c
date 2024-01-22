#include<stdio.h>

int main(void) {
	int num, fact = 1;
	printf("Input : ");
	scanf("%d", &num);
	for(int i = 1; i <= num; i++)
		fact *= i;
	if(num >= 0)
		printf("Fact : %d", fact);
	else
		printf("Enter valid num.");
	return 0;
}
