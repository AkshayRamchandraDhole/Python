
#include <stdio.h>

void main () {

	int a, b, c;
	printf("Enter Numbers : \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a>=b){
		if(a >= c){
			printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,a);
		}
		else {
			printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,c);
		}
	}
	else if(b >= c)
		printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,b);
	else
		printf("The maximum number amongst %d %d and %d is %d\n", a,b,c,c);
}
