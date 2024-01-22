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
	printf("Enter length of Set : \n");
	scanf("%d",&n);
	printf("Enter No of items allowed to pick at a time : \n");
	scanf("%d",&r);

	float per = (float) fact(n)/(fact(r)*fact(n-r));
	printf("C(%d,%d) : %.2f\n",n,r,per);

}
