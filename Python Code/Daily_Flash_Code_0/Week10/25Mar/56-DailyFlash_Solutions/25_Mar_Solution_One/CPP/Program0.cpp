#include <stdio.h>
#include <math.h>

int main() {

	int l = 0,x = 0,y = 0;
	float sum = 0;
	printf("Enter The Length of the Series\n");
	scanf("%d",&l);
	
	printf("Enter value of x\n");
	scanf("%d",&x);
	
	printf("Enter value of y\n");
	scanf("%d",&y);

	x = x + y;
	for(int i = 1; i <= l; i++)
		sum+=(i/(pow(x,i)));
	
	printf("Sum of Series = %.4f\n",sum);

	return 0;
}