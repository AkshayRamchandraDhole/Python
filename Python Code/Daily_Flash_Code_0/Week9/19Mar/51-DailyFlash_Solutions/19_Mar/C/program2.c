
#include <stdio.h>

void main() {
	char st[20];

	printf("Enter Any String : ");
	fgets(st, 20, stdin);
	printf("%s", st);
}
