
#include <stdio.h>
#include <math.h>

void main () {

	float len, per;
	printf("Enter length in metre\n");
	scanf("%f", &len);
	printf("Enter period in seconds\n");
	scanf("%f", &per);
	
	/*float per = (2*3.142)/sqrt(len/9.81);
	printf("Period of that pendulum is : %f seconds\n", per);
	float fre = 1/per;
	printf("Frequency of that pendulum is : %f Hz\n", fre);*/
	
	float g = (4*3.142*3.142*len)/(per*per);
	printf("Acceleration of that pendulum is : %f m/sq sec\n", g);

	return;
}
