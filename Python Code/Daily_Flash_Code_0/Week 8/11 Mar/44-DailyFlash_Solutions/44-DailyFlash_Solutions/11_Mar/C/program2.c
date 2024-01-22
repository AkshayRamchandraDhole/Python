
#include <stdio.h>

void main() {

	int n,k;
	printf("Enter Number : \n");
	scanf("%d", &k);
	for(int i = 1; i <= k ; i++){
		n = i;
		while(n != 0){
			if(n%10 == 0) {
				printf("%d ", i);
				break;
			}
			n = n / 10;
		}
	}
	printf("\n");
}
