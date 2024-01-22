#include<stdio.h>
#include<string.h>

int isPalindrome(char *str, int i, int j) {
	while(i < j) {

		if(str[i] != str[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}

int main() {
	char str[20];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	int len_str = strlen(str);
	if(str[len_str - 1] == '\n')
		str[len_str - 1] = '\0';
	len_str = strlen(str);
	if(isPalindrome(str, 0, len_str - 1)) {
		printf("Palindrome");
	}

}
