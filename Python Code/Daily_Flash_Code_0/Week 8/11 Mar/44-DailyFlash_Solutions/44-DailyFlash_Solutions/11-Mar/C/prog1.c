#include<stdio.h>

int main() {
	int num, cnt = 0, sqr = 0;
	for(int i = 1; i <= 60; i++) {
		int temp = i;
		cnt = 0;
		while(temp != 0) {
			temp /= 10;
			cnt++;
		}
		temp = i * i;
		sqr = 0;
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
		if(rev == i)
			printf("%d ", i);
	}
}	
