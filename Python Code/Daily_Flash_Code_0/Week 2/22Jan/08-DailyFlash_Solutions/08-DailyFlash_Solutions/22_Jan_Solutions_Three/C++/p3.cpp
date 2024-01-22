/*
Program 3: Write a program that accepts two integers from user and prints
addition of their Cubes and subtraction of their Squares.
Input: 10 20
Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300
*/


#include<iostream>


int main(){
	int var1,var2,sub=0,add=0;

	std::cout<<"Enter two integers : ";
	std::cin>>var1;
	std::cin>>var2;

	add=(var1*var1*var1)+(var2*var2*var2);
	std::cout<<"addition of "<<var1*var1*var1<<" & "<<var2*var2*var2<<" is "<<add<<"\n";


	if(var1>var2){
		sub=(var1*var1)-(var2*var2);
		std::cout<<"Subtraction of "<<var1*var1<<" & "<<var2*var2<<" is "<<sub<<"\n";

	}
	else if(var2>var1){
		sub=(var2*var2)-(var1*var1);
		std::cout<<"Subtraction of "<<var2*var2<<" & "<<var1*var1<<" is "<<sub<<"\n";

	}

	return 0;
}
