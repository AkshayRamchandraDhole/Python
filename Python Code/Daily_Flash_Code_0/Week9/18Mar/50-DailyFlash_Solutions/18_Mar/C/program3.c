
#include <stdio.h>

void main () {
	int n,i,fact = 1,sum,temp;

	printf("Enter Numbers : ");
	do {
		scanf("%d", &n);
		fact = 1;
		temp = n;
		sum = 0;
		while(n != 0){
			fact = 1 ;
			for(int i = 1; i <= n%10 ;i++){
				fact = fact * i;
			}
			if(n%10 == 0)
				fact = 1;
			sum = sum + fact;
			n = n / 10;
		}
		if(temp != sum)
			printf("%d\n", temp);
		else
			break;
	}while(1);
}
