#include<stdio.h>
#include<math.h>
int main() {
	int num, n1, n2;
	printf("Enter num : ");
	scanf("%d", &num);
	printf("Enter n1, n2: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	int temp = num;
	int cnt = 0;
	while(temp != 0) {
		cnt++;
		if(temp % 10 == n1) {
			num += (n2 - n1) * pow(10, cnt - 1);	
		}
		temp /= 10;
	}
	printf("%d", num);
}
