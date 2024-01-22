
#include <stdio.h>

int main () {
	
	int n;
	printf("Enter Size : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1 ; j--){
			if(j > i){
				printf("\t");
			}
			else{
				printf("%c%d\t",(64+j),(i-j+3));
			}
		}
		printf("\n");
	}	
}
