
#include <stdio.h>
#include <string.h>

void main() {
	char st[100];
	char c;
	printf("Enter Any String : ");
	fgets(st, 20, stdin);
	st[strlen(st) - 1] = '\0';
	int n = strlen(st);
	printf("%s\n", st);
	for(int i = 0; i < strlen(st)/2; i++){
		c = st[i];
		st[i] = st[n-i-1];
		st[n-i-1] = c;
	}
	printf("%s\n", st);
}
