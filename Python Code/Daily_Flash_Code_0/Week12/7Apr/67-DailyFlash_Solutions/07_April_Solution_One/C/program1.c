
#include <stdio.h>
#include <stdlib.h>

int isPali(int n) {
	int rev = 0, temp = n;
	while(n!=0){
		rev = rev * 10 + n%10;
		n /= 10;
	}	
	if(temp == rev)
		return 1;
	else
		return 0;
}
void main () {

	int n;
	printf("Enter length of Array : ");
	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);
	for(int i = 0; i < n ; i++){
		scanf("%d",(arr+i));
	}
	for(int i = 0; i < n ; i++){
		if(isPali(arr[i])){
			printf("%d ", arr[i]);
		}
	}	
	printf("\n");
}
