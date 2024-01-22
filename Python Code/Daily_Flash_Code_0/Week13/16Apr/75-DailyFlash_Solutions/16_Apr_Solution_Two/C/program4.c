
#include <stdio.h>

void main () {
	int n, flag;
	char c = 64;
	printf("Enter Limit : ");
	scanf("%d", &n);

	for(int i = 1; i < 2*n; i++){
		flag = 1;
		for(int j = 1; j < 2*n; j++){
			if(i <= n && j > (n-i) && j < (n+i)){
				if(flag == 1){
					printf("%c ", ++c);
					flag = 0;
				}
				else{
					printf(" ");
					flag = 1;
				}
			}
			else if(i>n && j > (i-n)  && j < (2*n-(i-n))){
				if(flag == 1){
					printf("%c ",++c);
					flag = 0;
				}
				else{
					printf(" ");
					flag = 1;
				}
			}
			else {
				printf(" ");
			}
		}
		c--;
		printf("\n");
	}
}
