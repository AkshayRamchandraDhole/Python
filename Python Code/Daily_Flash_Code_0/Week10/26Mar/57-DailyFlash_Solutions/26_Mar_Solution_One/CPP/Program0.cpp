#include <stdio.h>

#define PI 3.142

int main() {

	int deg = 0;
	printf("Enter Angles in degrees\n");
	scanf("%d",&deg);
	
	printf("%d Degrees = %.4f Radians\n",deg,(PI*deg)/180);
	return 0;
}
