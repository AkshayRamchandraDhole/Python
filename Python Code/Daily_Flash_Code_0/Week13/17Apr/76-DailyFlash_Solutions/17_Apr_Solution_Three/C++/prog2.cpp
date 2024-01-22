#include<stdio.h>
#include<string.h>
int main() {
	char str1[40];
	char str2[20];
	printf("Enter string1: ");
	fgets(str1, 40, stdin);
	if(str1[strlen(str1) - 1] == '\n')
		str1[strlen(str1)-1] = '\0';
	printf("Enter string2: ");
	fgets(str2, 20, stdin);
	if(str1[strlen(str2) - 1] == '\n')
		str1[strlen(str2)-1] = '\0';
	int len = strlen(str1);
	for(int i = 0; i < strlen(str2); i++) {
		str1[len + i] = str2[i];
	}
	
	puts(str1);
}
