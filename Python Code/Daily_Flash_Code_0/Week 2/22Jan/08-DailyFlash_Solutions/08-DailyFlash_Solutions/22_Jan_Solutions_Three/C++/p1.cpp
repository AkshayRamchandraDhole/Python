/*
Program 1: Write a program that accepts two integers from user and prints
addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}
Input: 10 20
Output:
Addition is 20
Subtraction is 10
*/


#include<iostream>


int main(){
	int var1,var2,sub=0,add=0;

	std::cout<<"Enter two integers : ";
	std::cin>>var1;
	std::cin>>var2;

	add=var1+var2;
	std::cout<<"addition is "<<add<<"\n";


	if(var1>var2){
		sub=var1-var2;
		std::cout<<"Subtraction is "<<sub<<"\n";

	}
	else if(var2>var1){
		sub=var2-var1;
		std::cout<<"Subtraction is "<<sub<<"\n";

	}




	return 0;
}
