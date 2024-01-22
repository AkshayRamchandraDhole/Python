#include<stdio.h>
#include<math.h>


int fact(int num){

	int fact =1;
	while(num>0){
		fact *=num;
		num -= 1;
	}

	return fact;
}



void main(){

	int r = 0,n = 0;
	printf("Enter Number of Employees : \n");
	scanf("%d",&n);
	printf("Enter No of medals to be distributed : \n");
	scanf("%d",&r);

	float per = (float) fact(n)/(fact(r) *  fact(n-r));
	printf("There are %.2f ways to distribute %d medals among %d Employees \n",per,r,n);

}
