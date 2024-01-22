#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char str[20];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	len = strlen(str);
	int i;
	printf("Enter ind: ");
	scanf("%d", &i);
	for(int j = 0; str[j] != '\0'; j++) {
		if(j >= i) {
			str[j] = str[j+1];
		}
	}
	puts(str);

}
