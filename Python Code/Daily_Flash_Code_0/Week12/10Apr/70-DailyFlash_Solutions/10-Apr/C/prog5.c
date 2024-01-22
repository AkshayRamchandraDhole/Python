#include<stdio.h>

int fact(int i) {
	if(i <= 1)
		return 1;
	return i * fact(i - 1);
}

int main() {
	printf("%d", fact(6)/fact(6 - 3));
	printf("\n%d", fact(6)/(fact(6 - 3) * fact(3)));
}	
