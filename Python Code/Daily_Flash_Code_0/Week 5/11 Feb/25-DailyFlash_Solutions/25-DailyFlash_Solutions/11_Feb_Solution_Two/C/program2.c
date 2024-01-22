
#include <stdio.h>
#include<math.h>
void exit(int);

void main () {
	int n, sum = 0, c = 0;
	printf("Enter Octal Number: ");
	scanf("%d", &n);
	while(n!=0){
		if(n%10>=8){
			printf("Not a Octal Number\n");
			exit(0);
		}
		//printf("%d\n",n%10);
		sum = sum + ((int)pow(8,c) * (n%10));
		//printf("sum  : %d\n", (int)(pow(8,c))*n%10);
		c++;
		n = n/10;
	}	
	printf("Decimal Number : %d\n", sum);
}
