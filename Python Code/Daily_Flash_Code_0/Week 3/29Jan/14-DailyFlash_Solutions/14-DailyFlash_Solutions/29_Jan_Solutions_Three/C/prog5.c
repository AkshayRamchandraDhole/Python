#include<stdio.h>

int main(void) {
	int d, m, y;
	printf("Enter date : ");
	scanf("%d %d %d", &d, &m, &y);
	if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 0 && d <= 31) && y >= 0) {
		printf("Vaiid date");
	} else if((m == 4 || m == 6 || m == 9 || m == 11) && (d > 0 && d <= 30) && y >= 0){
		printf("valid date");
	} else if(m == 2 && y >= 0) {
		if(y % 100 == 0) {
			if(y % 400 == 0) {
				if(d > 0 && d <= 29) {
					printf("valid date");
				} else {
					printf("Invalid date");
				}
			} else {
				if(d > 0 && d <= 28) {
					printf("Valid date");
				} else {
					printf("Invalid date");
				}
			}
		} else if(y % 4 == 0) {
			if(d > 0 && d <= 29) {
				printf("valid date");
			} else {
				printf("Invalid date");
			}	
		} else if(d > 0 && d <= 28) {
			printf("valid date");
		} else {
			printf("Invalid date");
		}

	} else {
		printf("Invalid");
	}
	return 0;
}
