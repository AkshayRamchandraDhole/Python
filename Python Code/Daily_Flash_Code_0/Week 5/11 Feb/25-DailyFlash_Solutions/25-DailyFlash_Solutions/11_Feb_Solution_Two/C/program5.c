
#include <stdio.h>

void exit(int);

void main () {

	int cnt = 0, n;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n<0)
		return;
	while(n != 0){
		(n%10)%2?0:cnt++;
		n = n / 10;
	}	
	printf("Count : %d\n", cnt);
}
