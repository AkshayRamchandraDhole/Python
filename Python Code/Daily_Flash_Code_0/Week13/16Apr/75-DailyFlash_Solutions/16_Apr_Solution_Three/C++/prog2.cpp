#include<stdio.h>
#include<string.h>
int main() {
	char arr[20];
	fgets(arr, 20, stdin);
	int len = strlen(arr);
	if(arr[len-1] == '\n')
		arr[len-1] = '\0';
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] >='a' && arr[i] <= 'z') {
			arr[i] = (char)(arr[i] - 32);
		} else if(arr[i]>='A' && arr[i]<='Z') {
			arr[i]= (char)(arr[i] + 32);
		}
	}
	printf("%s", arr);
	return 0;
}
