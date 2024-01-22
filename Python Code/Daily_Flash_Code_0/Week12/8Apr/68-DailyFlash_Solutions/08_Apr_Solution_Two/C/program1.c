
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

	int n;
	double avg,sum,var,sd;
	printf("Enter length of Array : ");
	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);
	for(int i = 0; i < n ; i++){
		scanf("%d",(arr+i));
		sum += arr[i];
	}
	avg = sum/n;
	sum = 0;
	for(int i = 0; i < n ; i++){
		sum += (arr[i]-avg)*(arr[i]-avg);
	}	
	var = sum/n;
	sd = sqrt(var);
	printf("Avg : %f\n",avg);
	printf("Var : %f\n",var);
	printf("SD : %f\n",sd);
	
}
