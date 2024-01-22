#include<stdio.h>
#include<string.h>

int main(void) {
	
	char arr[10];
	printf("Enter octal : ");
	fgets(arr, sizeof(arr), stdin);
	int len = strlen(arr);
	if(arr[len - 1] == '\n') {
		arr[len - 1] = '\0';
	}
	len = strlen(arr);
	int i = 0;
	int dec = 0;
	int num;
	while(1) {
		if(i > len - 1)
			break;
		num = arr[i] - 48;
		dec = dec * 8 + num;
		i++;
	}	
	printf("Decimal : %d", dec);
	return 0;
}	
