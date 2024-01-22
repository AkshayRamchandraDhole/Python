/*
Program 1: Write a Program to print series of odd numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Odd Numbers Ranging between 4 & 60 is:
5, 7, 9, . . ., 59
*/

#include<stdio.h>


void main(){

	
	int lowerlimit;
	int upperlimit;


	printf("Min of Series : ");
	scanf("%d",&lowerlimit);

	printf("Max of Series : ");
	scanf("%d",&upperlimit);


	for(int itr = lowerlimit ; itr < upperlimit ; itr++){

		itr%2!=0?printf("%d",itr):printf(" ");	

	}	


}	
