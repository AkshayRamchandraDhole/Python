#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strrev(char str[20], int i, int j) {
	if(i >= j)
		return;
	char temp = str[i];
	str[i] = str[j];
	str[j] = temp;
	strrev(str, i+1, j-1);
}

int main() {
	char str[20];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	len = strlen(str);
	strrev(str, 0, len-1);
	puts(str);

}
