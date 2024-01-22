#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char hex[10];
	printf("Enter hex : ");
	fgets(hex, sizeof(hex), stdin);
	int len = strlen(hex);
	if(hex[len - 1] == '\n') {
		hex[len - 1] = '\0';
	}
	len = strlen(hex);
	int k = 0;
	while(k < len) {
		if(!((hex[k] >= '0' && hex[k] <= '9') || (hex[k] >= 'A' && hex[k] <= 'F'))) {
			printf("Enter valid hex");
			exit(1);
		}
		k++;
	}
	int d = 0, num, i = 0;
	while(len > 0) {
		num = hex[i] - 48 <= 9 ? hex[i] - 48 : hex[i] - 55;
		d = d * 16 + num;
		len--;
		i++;
	}
	printf("Dec = %d", d);
	return 0;
}
