#include<stdio.h>

int pallindrome(int num){

		int temp = num;
		int rev = 0;

		//While loop to reverse the Number
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		};

		if(num == rev)
			return 1;
		else 
			return 0;
			
}

int main(){

	int num = 0;

	printf("Enter the array size : \n");
	scanf("%d",&num);

	printf("Enter Array Elements\n");
	int arr[num];
	for(int i = 0; i < num; i++)
		scanf("%d",&arr[i]);

	printf("The Pallindrome numbers in array are\n");

	for(int i=1; i < num; i++){
		int x = pallindrome(arr[i]);
		if(x)
			printf("%d\t",arr[i]);
	}

	printf("\n");
	return 0;
}
