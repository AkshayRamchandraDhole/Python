/* Problem Statement
 * 
 * Write a Program that calculates addition of two complex numbers.
 */

#include<iostream>

int main() {

	int num1_real,num1_imaginary,num2_real,num2_imaginary;

	std::cout<<"Enter number 1"<<std::endl;
	std::cout<<"Real Part"<<std::endl;
	std::cin>>num1_real;
	std::cout<<"Imaginary Part"<<std::endl;
	std::cin>>num1_imaginary;

	std::cout<<"Enter number 2"<<std::endl;
	std::cout<<"Real Part"<<std::endl;
	std::cin>>num2_real;
	std::cout<<"Imaginary Part"<<std::endl;
	std::cin>>num2_imaginary;

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

	std::cout<<"The Addition of Complex Numbers "<<num1_real<<"+"<<num1_imaginary<<"i and "<<num2_real<<"+"<<num2_imaginary<<"i is "<<(num1_real+num2_real)<<"+"<<(num1_imaginary+num2_imaginary)<<"i"<<std::endl;

	return 0;

}




