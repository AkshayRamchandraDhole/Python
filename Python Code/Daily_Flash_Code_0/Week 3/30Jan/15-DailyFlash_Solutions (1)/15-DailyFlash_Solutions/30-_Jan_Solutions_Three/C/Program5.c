/* Problem Statement
 * 
 * Write a Program that calculates addition of two complex numbers.
 */

#include<stdio.h>

void main() {

	int num1_real,num1_imaginary,num2_real,num2_imaginary;

	printf("Enter number 1\n");
	printf("Real Part\t");
	scanf("%d",&num1_real);
	printf("Imaginary Part\t");
	scanf("%d",&num1_imaginary);

	printf("Enter number 2\n");
	printf("Real Part\t");
	scanf("%d",&num2_real);
	printf("Imaginary Part\t");
	scanf("%d",&num2_imaginary);

	//To change the signs, if both are negative then no need of anything
	if(num1_imaginary < 0 && num2_imaginary < 0){
	
	}

	//If imaginary of num1 is negative the swap the signs with real and imaginary
	else if(num1_imaginary < 0){

		num1_imaginary = -num1_imaginary;
		num1_real = -num1_real;
	}

	//If imaginary of num2 is negative the swap the signs with real and imaginary
	else if(num2_imaginary < 0){

		num2_imaginary = -num2_imaginary;
		num2_real = -num2_real;
	}

	printf("The Addition of Complex Numbers %2d+%2di and %2d+%2di is %2d+%2di\n",num1_real,num1_imaginary,num2_real,num2_imaginary,(num1_real+num2_real),(num1_imaginary+num2_imaginary));

}
