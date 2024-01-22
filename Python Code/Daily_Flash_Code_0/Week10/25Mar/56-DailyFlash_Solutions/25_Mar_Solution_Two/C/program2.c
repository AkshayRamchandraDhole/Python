
#include <stdio.h>
#include <string.h>

void main() {
	char st[100];

	printf("Enter Any String : ");
	fgets(st, 20, stdin);
	printf("%ld\n", strlen(st));
}
