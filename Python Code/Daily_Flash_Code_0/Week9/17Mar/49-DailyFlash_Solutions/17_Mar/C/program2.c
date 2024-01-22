
#include <stdio.h>

void main () {
	int n;

	printf("Enter Number : ");
	scanf("%d", &n);

	int max,rev = 0;
	int m;
	printf("Enter Digit from number to replace : ");
	scanf("%d", &m);
	printf("Enter Digit to replace %d : ",m);
	scanf("%d", &max);
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while(rev != 0){
		if(rev % 10 == m)
			n = n * 10 + max;
		else
			n = n * 10 + rev % 10;
		rev /= 10;

	}
	printf("%d\n", n);
}
