
#include <stdio.h>
#include <stdlib.h>
void main() {
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	float temp = 0;
	int cnt = 0;
	while(n != 0){
		cnt++;
		temp = temp + n % 10;
		n = n / 10;
	}
	printf("Sum : %f\n", temp);
	printf("Average : %f\n", temp / cnt);
}
