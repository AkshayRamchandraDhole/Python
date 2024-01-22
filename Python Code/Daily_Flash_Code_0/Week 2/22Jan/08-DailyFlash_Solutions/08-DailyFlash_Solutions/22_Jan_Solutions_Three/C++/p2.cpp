/*
Program 2: Write a program that accepts two integers from user and prints
multiplication & Division of them.
{Note: checks for smaller divisor amongst entered number while computing
division}
Input: 10 20
Output:
Multiplication is 200
Division is 2
*/


#include<iostream>


int main(){
	int var1,var2,mul=0;
	float div=0;

	std::cout<<"Enter two integers : ";
	std::cin>>var1;
	std::cin>>var2;

	mul=var1*var2;
	std::cout<<"Multiplication is "<<mul<<"\n";


	if(var1>var2){
		div=var1/var2;
		std::cout<<"Division is "<<div<<"\n";

	}
	else if(var2>var1){
		div=var2/var1;
		std::cout<<"Division is "<<div<<"\n";

	}
	
	return 0;
}
