
#include <stdio.h>

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
void main () {
	int per = fact(8)/(fact(3)*fact(5));
	printf("Number of possible ways : %d\n", per);
}
