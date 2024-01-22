
#include <stdio.h>
void main() {

	char c1 = 64, c2 = 64;
	printf("Enter Alphabets : \n");
	do {	
		c2 = c1;
		scanf(" %c", &c1);
		
	}while(1 == c1-c2 && c1 <= 90);
	printf("You Entered Wrong Alphabet\n");
}
