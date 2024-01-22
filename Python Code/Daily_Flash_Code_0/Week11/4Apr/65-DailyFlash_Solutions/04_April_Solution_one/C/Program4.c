#include<stdio.h>
#include<math.h>


void main(){

	double freq = 0;
	printf("Enter the frequency of Pendulum in Hz : \n");
	scanf("%lf",&freq);

	printf("Period is : %.2lf\n",1/freq);

}
