
#include <stdio.h>
#include <string.h>

void main() {
	char st[20];

	printf("Enter Any String : ");
	fgets(st, 20, stdin);
	for(int i = 0; i < strlen(st); i++){
		if(st[i]!= '\n')
			printf("%c ", st[i]);
	}
	printf("\n");
}
