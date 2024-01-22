
#include <stdio.h>

void exit(int);

void main () {

	int cnt1 = 0,cnt2 = 0, n;
	printf("Enter Number : ");
	scanf("%d", &n);

	if(n<0)
		return;
	while(n != 0){
		(n%10)%2?cnt1++:cnt2++;
		n = n / 10;
	}	
	printf("Count of Odd digits: %d\n", cnt1);
	printf("Count of Even digits: %d\n", cnt2);
}
