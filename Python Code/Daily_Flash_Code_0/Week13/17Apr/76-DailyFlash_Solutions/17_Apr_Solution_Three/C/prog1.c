#include<stdio.h>
#include<string.h>
int main() {
	char str1[20];
	char str2[20];
	printf("Enter string1: ");
	fgets(str1, 20, stdin);
	if(str1[strlen(str1) - 1] == '\n')
		str1[strlen(str1)-1] = '\0';
	printf("Enter string2: ");
	fgets(str2, 20, stdin);
	if(str1[strlen(str2) - 1] == '\n')
		str1[strlen(str2)-1] = '\0';
	int i = 0;
	int min;
	if(strlen(str1) > strlen(str2)) {
		min = strlen(str2);
	} else {
		min = strlen(str1);
	}
	while(i < min) {
		if(str1[i] != str2[i]) {
			printf("%d", (int)(str1[i]-str2[i]));
			return 0;
		}
		i++;
	} 
	printf("Equal strings.");
}
