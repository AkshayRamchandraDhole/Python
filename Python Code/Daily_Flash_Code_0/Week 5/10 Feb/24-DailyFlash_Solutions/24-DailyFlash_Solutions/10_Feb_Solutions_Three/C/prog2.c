#include<stdio.h>
#include<string.h>
int main(void) {
	char arr[10];
	int bin[3];
	printf("Enter octal num : ");
	fgets(arr, sizeof(arr), stdin);
	if(arr[strlen(arr) - 1] == '\n') {
		arr[strlen(arr) - 1] = '\0';
	}
	int n, k, rem;
	int len = strlen(arr);
	for(int i = 0; i < len; i++) {
		n = arr[i] - 48;
		k = 0;
		bin[2] = 0;
		bin[1] = 0;
		bin[0] = 0;
		while(n != 0) {
			rem = n % 2;
			bin[k] = rem;
			k++;
			n = n / 2;
		}
		printf("%d%d%d", bin[2], bin[1], bin[0]);	
	}
}
