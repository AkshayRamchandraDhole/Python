
#include <stdio.h>

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
void main () {

	int r,n;
	printf("N and R: ");
	scanf("%d%d", &n,&r);
	int per = fact(n)/(fact(r)*fact(n-r));
	printf("To pick %d items from s set of %d items there are %d possible ways.\n", r,n,per);
}
