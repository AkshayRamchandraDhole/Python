#include<stdio.h>


void main(){

	
	int real1,real2;
	int img1,img2;

	printf("Enter the first Complex Number : \n");
	scanf("%d",&real1);
	scanf("%d",&img1);	
	printf("Enter the Second Complex Number : \n");
	scanf("%d",&real2);
	scanf("%d",&img2);	


	printf("Addition of %d + i%d & %d + i%d = %d + i%d",real1,img1,real2,img2,real1+real2,img1+img2);
}	
