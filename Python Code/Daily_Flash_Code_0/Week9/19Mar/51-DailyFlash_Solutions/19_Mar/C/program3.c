
#include <stdio.h>
#include <stdlib.h>
void main() {
	int n;
	printf("Enter Number : ");
	scanf("%d", &n);
	int temp = n, cnt = 0;
	while(n != 0){
		cnt++;
		n = n / 10;
	}
	int *arr = (int *)malloc(cnt);
	cnt = 0;
	while(temp != 0 ){
		arr[cnt] = temp % 10;
		temp = temp  / 10;
		cnt++;
	}
	for(int i = 0; i < cnt; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
