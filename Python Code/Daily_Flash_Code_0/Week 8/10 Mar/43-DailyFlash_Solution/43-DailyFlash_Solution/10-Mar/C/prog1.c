#include<stdio.h>

int main() {
	int num, cnt = 0, sqr = 0;
	printf("Enter num : ");
	scanf("%d", &num);
	int temp = num;
	while(temp != 0) {
		temp /= 10;
		cnt++;
	}
	temp = num * num;
	while(cnt != 0) {
		sqr = sqr * 10 + temp % 10;
		temp /= 10;
		cnt--;
	}
	int rev = 0;
	while(sqr != 0) {
		rev = rev * 10 + sqr % 10;
		sqr /= 10;
	}
	if(rev == num)
		printf("Automorphic");
	else 
		printf("No Automorphic");
}	
