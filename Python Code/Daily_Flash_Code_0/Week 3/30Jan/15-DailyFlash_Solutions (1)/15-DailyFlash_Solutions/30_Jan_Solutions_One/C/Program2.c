#include<stdio.h>


void main(){
	
	int mass,velocity;

	printf("Enter the mass : ");
	scanf("%d",&mass);
	printf("Enter the velocity : ");
	scanf("%d",&velocity);


	printf("Kinectic Energy : %f",0.5*mass*velocity*velocity);
}	
