#include<stdio.h>
#include<string.h>


int main() {
	char str[20];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	int i, j;
	printf("i, j: ");
	scanf("%d %d", &i, &j);
	int len_str = strlen(str);
	if(str[len_str - 1] == '\n')
		str[len_str - 1] = '\0';
	char cpy[20] = {'\0'};
	
	while(i < j) {
		cpy[i] = str[i];
		i++;
	}
	printf("%s", cpy);

}
