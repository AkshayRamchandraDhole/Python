#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d",  &n);
	
	int arr[n];
	int smallest;
	int sec;
	printf("Enter array :");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(i==0) {
			smallest = arr[i];
		}
		if(smallest < arr[i]) {
			smallest = arr[i];
		}
	}
	int flag = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] != smallest && flag== 0) {
			sec = arr[i];
			flag = 1;
		}

		if(sec < arr[i] && flag == 1 && arr[i] != smallest)
			sec = arr[i];
	}		
	printf("sec largest: %d", sec);
}
