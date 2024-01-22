#include<stdio.h>

int main() {
	
	int asc = 64;
	char ch;
	do {
		scanf(" %c", &ch);
		asc++;
	} while(asc == ch);
}
