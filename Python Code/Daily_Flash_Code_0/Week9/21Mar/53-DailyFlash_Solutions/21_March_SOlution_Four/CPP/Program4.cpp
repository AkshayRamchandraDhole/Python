
#include<stdio.h>
#include<math.h>

float squareRoot(int num){

	float sqrt = num ,temp=0;

	while(sqrt!= temp){
	
		temp = sqrt;
		sqrt = (num/temp+temp)/2;
	}
	return sqrt;
}

int main(){

	int num,sum=0;
	float avg,variance = 0;

	printf("Enter Value of N : ");
	scanf("%d",&num);

	int arr[num];

	printf("Enter %d number : \n",num);
	for(int i=0;i<num;i++){

		scanf("%d",&arr[i]);
		sum+=arr[i];
	}

	avg = (float)sum/num;
	for(int i=0;i<num;i++){

		variance += ((arr[i]-avg)*(arr[i]-avg)) / num;
	}

	printf("Average (a) of Numbers : %.2f\n",avg);
	printf("Variance of Numbers : %.2f\n",variance);
	printf("Standard Deviation of Numbers: %.2f\n",squareRoot(variance));
}
