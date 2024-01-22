#include<stdio.h>

int main(void) {
	int hrs;
	printf("hrs : ");
	scanf("%d", &hrs);
	if(hrs >= 0) {
		printf("sec : %d", hrs * 60 * 60);
	} else {
		printf("Enter valid det.");	
	}
	return 0;
}
