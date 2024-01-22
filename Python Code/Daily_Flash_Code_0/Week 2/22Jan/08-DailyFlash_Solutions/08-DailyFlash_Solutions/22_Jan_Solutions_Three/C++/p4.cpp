/*
Program 4: Write a Program to simulate simple calculator. Accept two integers
from user and sign of operation to perform.
Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +
Output: Addition of 10 & 20 is 30.
*/

#include<iostream>


int main(){
	int var1,var2,sub=0,add=0,mul=0;
	float div;
	char sign;


	std::cout<<"Enter two integers : "<<"\n";
	std::cin>>var1;
	std::cin>>var2;

	std::cout<<"Enter sign of operation : "<<"\n";
	std::cin>>sign;

	switch(sign){
		case '+' :add=var1+var2;
			  std::cout<<"Addition of"<<var1<<" & "<<var2<<" is "<<add<<"\n";
			  break;
		
		case '-':sub=var1-var2;
			 std::cout<<"subtraction of"<<var1<<" & "<<var2<<" is "<<sub<<"\n";
			 break;
		
		case '*':mul=var1*var2;
			 std::cout<<"multiplication of"<<var1<<" & "<<var2<<" is "<<mul<<"\n";
			 break;

		case '/':div=var1/var2;
			 std::cout<<"division of"<<var1<<" & "<<var2<<" is "<<div<<"\n";
			break;

		default:std::cout<<"Invalid input"<<"\n";

	}

	return 0;
}


