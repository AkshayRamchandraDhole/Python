
#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2){
	
	if(n2 != 0)
		return gcd(n2, n1 % n2);
	else
		return n1;

}
int main () {

	int n1, n2;
	printf("Enter Numbers : \n");
	scanf("%d %d", &n1, &n2);

	if(n1 < 0 || n2 < 0)
		exit(0);
	

	printf("The GCD of %d and %d is %d\n", n1, n2, gcd(n1, n2));
}
